#ifndef _UNICODE
#define _UNICODE
#endif // _UNICODE

#define UNICODE_BOM 0xFEFF /* Byte Order Marker */ /* 0xFE 0xFF UTF-16BE*/ /* 0xFF 0xFE UTF-16LE */ /* 0xEF 0xBB 0xBF UTF-8 BOM */ /* 00 00 FE FF UTF-32BE */ /* FF FE 00 00 UTF-32LE */

#define UNKNOWN_ASCII 0x3F

#define UNKNOWN_UNICODE 0xFFFD

#define ASCII /* Win 95/98 ANSI text */

#define UTF_7 /* Legacy */ /* mUTF-7? */
#define UTF_8 /* BOM */ /* Microsoft recommends using UTF-8 */
#define UTF_16BE /* BOM */
#define UTF_16LE /* Windows uses this for text WIDECHARCTER */ /* BOM */
#define UTF_32BE /* BOM */
#define UTF_32LE /* BOM */
#define UTF_EBCDIC /* BOM */ /* DD 73 66 73 */

#define BOCU /* BOM */  /* FB EE 28 */
#define SCSU /* BOM */ /* 0E FE FF */

#define GB18030 /* Chinese Government Standard */ /* BOM */ /* 84 31 95 33 */

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
    int len; /* length */ /* I assume this can be a remainder length */

    uint8_t ch; /* Characters? */ /* Code Point cp */
};

size_t ascii_encoding(int src, int dst);

/* Linux and Mac uses this */
size_t utf8_encoding(uint8_t src, uint8_t dst);

/* Windows uses this */
size_t utf16_encoding(uint16_t src, uint16_t dst);

/* Linux uses this */
size_t utf32_encoding(uint32_t src, uint32_t dst);

size_t bocu_encoding(uint32_t src, uint32_t dst);

size_t scsu_encoding(uint16_t src, uint16_t dst);

size_t gb18030_encoding(uint16_t src, uint16_t dst);

/* Windows old applications use this */

size_t ucs2_encoding(uint8_t src, uint8_t dst);

/* UCS4? */

size_t ucs4_encoding(uint16_t src, uint16_t dst);

