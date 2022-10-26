#ifndef _UNICODE
#define _UNICODE
#endif // _UNICODE

#define UNICODE_BOM 0xFEFF /* Byte Order Marker */ /* 0xFE 0xFF UTF-16BE*/ /* 0xFF 0xFE UTF-16LE */ /* 0xEF 0xBB 0xBF UTF-8 BOM */ /* 00 00 FE FF UTF-32BE */ /* FF FE 00 00 UTF-32LE */

#define UNKNOWN_ASCII 0x3F

#define UNKNOWN_UNICODE 0xFFFD

#define ASCII /* Win 95/98 ANSI text */

#define UTF_8 /* BOM */ /* Microsoft recommends using UTF-8 */
#define UTF_16BE /* BOM */
#define UTF_16LE /* Windows uses this for text WIDECHARCTER */ /* BOM */
#define UTF_32BE /* BOM */
#define UTF_32LE /* BOM */

#define UCS2_BE
#define UCS2_LE
#define UCS4_LE
#define UCS4_BE

#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

struct encoding_t
{
    int src; /* source */
    int dst; /* destination */
    int len; /* length */
};

size_t utf8_encoding(uint8_t src, uint8_t dst);

