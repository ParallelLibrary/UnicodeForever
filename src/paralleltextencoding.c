#include "paralleltextencoding.h"

size_t utf8_encoding(uint8_t src, uint8_t dst)
{
    int len;
    uint8_t ch;
    /* BOM UTF-8*/
     if (len < 1)
     {
      if (src == 0xEF && src == 0xBB && src == 0xBF)
      {
      }
      ch = src;
      if (ch < 0x80)
      {
      }
     }
      src += 2;
      --len;
      return 0;
}
