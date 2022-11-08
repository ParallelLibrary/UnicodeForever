#ifndef _UNICODE
#define _UNICODE
#endif // _UNICODE

#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

size_t utf_len(const char* utf_len, int byte_len);

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

int utfconsole_test(const char* text, const wchar_t* str);

