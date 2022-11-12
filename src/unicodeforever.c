#include "unicodeforever.h"

size_t utf8_encoding(uint8_t src, uint8_t dst)
{
      int len = 0;
      uint8_t ch;

      uint8_t *i = &src;
      ch = src;

      /* BOM UTF-8*/
     if(src < len)
     {
      if ((i[0] == 0xEF && i[1] == 0xBB && i[2] == 0xBF) || (i == 0))
      {
          len++;
      }

      if (ch < 0x80)
      {
          /* 0xxxxxxx */
      }
      else if(0xc0 == (ch & 0xe0))
      {
          /* 110xxxxxx 10xxxxxx */
      }
      else if(0xe0 == (ch & 0xf0))
      {
           /* 1110xxxx 10xxxxxx */
      }
      else if(0xf0 == (ch & 0xf8))
      {
            /* 11110xxx 10xxxxxx */
      }
     }
    src += 4;
    len++;

    if (src < len)
    {
    /* Overlongs */

    /* Invalid Slashes */

    if ((ch & 0xc0) && (ch & 0xaf || ch & 0xe0) && (ch & 0x80) && (ch & 0xaf || ch & 0xf0) && (ch & 0x80) && (ch & 0x80) && (ch & 0xaf || ch & 0xf8) && (ch & 0x80) && (ch & 0x80) && (ch & 0x80) && (ch & 0xaf))
    {
        return 0;
    }

    /* 007F */  /* 07FF */  /* FFFF */
    if ((ch & 0xc1) && (ch & 0xbf || ch & 0xe0) && (ch & 0x9f) && (ch & 0xbf || ch & 0xf0) && (ch & 0x8f) && (ch & 0xbf) && (ch & 0xbf || ch & 0xf8) && (ch & 0x87) && (ch & 0xbf) && (ch & 0xbf) && (ch & 0xbf))
    {
        return 0;
    }

    if ((ch & 0xc0) && (ch & 0x80 || ch & 0xe0) && (ch & 0x80) && (ch & 0x80 || ch & 0xf0) && (ch & 0x80) && (ch & 0x80) && (ch & 0x80 || 0xf8) && (ch & 0x80) && (ch & 0x80) && (ch & 0x80) && (ch & 0x80))
    {
        return 0;
    }

    /* Bad Continuation Bytes */

    /* Non Minimal Sequences */

    /* Invalid in UTF-8 UTF-16 LE BOM */

    if ((ch & 0xef) && (ch & 0xbf) && (ch & 0xbe || ch & 0xef) && (ch & 0xbf) && (ch & 0xbf))
    {
        return 0;
    }

    /* Surrogates */
      if ((ch & 0xed) && (ch & 0xa0) && (ch & 0x80 || ch & 0xed) && (ch & 0xad) && (ch & 0xbf || ch & 0xed) && (ch & 0xae) && (ch & 0x80 || ch & 0xed) && (ch & 0xaf) && (ch & 0xbf || ch & 0xed) && (ch & 0xb0) && (ch & 0x80 || ch & 0xed) && (ch & 0xbe) && (ch & 0x80 || ch & 0xed) && (ch & 0xbf) && (ch & 0xbf))
      {
          return 0;
      }
     }
     len--;

    return len;
}

size_t utf16_encoding(uint16_t src, uint16_t dst)
{
    int len = 0;
    uint16_t ch;

    uint16_t *i = &src;
    ch = src;

    if (src < len)
    {
     if (i[0] == 0xFE && i[1] == 0xFF)
     {
       len++;
     }

     if (0x10000 <= 0x10FFFF)
     {
       if ((ch & 0x3FF) && (ch & 0xD800))
       {
         /* High Surrogate */
       }
       else if ((ch & 0x3FF) && (ch & 0xDC00))
       {
           /* Low Surrogate */
       }

       if ((ch & 0x3FF) && (ch & 0xDBFF))
       {
           /* High Surrogate */
       }
       else if ((ch & 0x3FF) && (ch & 0xDFFF))
       {
           /* Low Surrogate */
       }
     }
    }
    src += 4;
    len++;

    return len;
}

size_t utf_strlen(const char* utf_len, int byte_len)
{
    int len;

    size_t i;

    strlen(utf_len);

    return len;
}
