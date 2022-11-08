#include "paralleltextencoding.h"

size_t utf8_encoding(uint8_t src, uint8_t dst)
{
      int len = 0;
      uint8_t ch;

      uint8_t *i = &src;
      ch = src;

      /* BOM UTF-8*/
     if(src < len)
     {
      if (i[0] == 0xEF && i[1] == 0xBB && i[2] == 0xBF)
      {
        if (i == 0)
        {
            len++;
        }

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
     };
    src += 4;
    len++;

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
     if (i[1] == 0xFE && i[2] == 0xFF)
     {
       len++;
     }

     if (0x10000 <= 0x10FFFF)
     {
       if (ch & (0x3FF | 0xD800))
       {
         /* High Surrogate */
       }
       else if (ch & (0x3FF | 0xDC00))
       {
           /* Low Surrogate */
       }

       if (ch & (0x3FF | 0xDBFF))
       {
           /* High Surrogate */
       }
       else if (ch & (0x3FF | 0xDFFF))
       {
           /* Low Surrogate */
       }

       src += 4;
       len++;
     }
    }

    return len;
}

size_t utf_charlen(const char* utf_len, int byte_len)
{
    int len;
      strlen(utf_len);

      return 0;
}
