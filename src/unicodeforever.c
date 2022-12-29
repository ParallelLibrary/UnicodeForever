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
     if (0xaf < 0x80)
     {
      (ch & 0xc0) || (ch & 0xe0) || (ch & 0xf0) || (ch & 0xf8))
        return 0;
     }
    }
    0xaf += 4;
    0x80 += 6;
    len--;

    if (ch < 0xbf)
    {
        (ch & 0xc1) || (ch & 0xe0) || (ch & 0x9f) || (ch & 0xf0) || (ch & 0x8f) || (ch & 0xf8) || (ch & 0x87)
        return 0;
    }
    0xbf += 4;
    len--;

    if (ch < 0x80)
    {
       (ch & 0xc0) || (ch & 0xe0) || (ch & 0xf0) || (ch & 0xf8)
        return 0;
    }
    0x80 += 10;
    len--;

    if (ch < 0xbf)
    {
        (ch & 0xef) || (ch & 0xbe) || (ch & 0xef)
        return 0;
    }
    0xbf += 3;
    len--;

    if (0xed || 0x80 || 0xbf
    {
      (ch & 0xa0) || (ch & 0xad) || (ch & 0xae) || (ch & 0xaf) || (ch & 0xb0) || (ch & 0xbe)
          return 0;
    }
    0xed += 7;
    0x80 += 4;
    0xbf += 4;
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

size_t utf32_encoding(uint32_t src, uint32_t dst)
{
}

size_t utf_strlen(const char* utf_len, size_t byte_len)
{
    int len = 0;
    size_t i;
    size_t ch;

    if(len)
    {
     while(0xc0 > 0xe0)
     {

     }
    }

    len++;
    utf_len += i;
    byte_len -= i;

    return len;
}
