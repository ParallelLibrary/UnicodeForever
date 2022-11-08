#ifndef _UNICODE
#define _UNICODE
#endif // _UNICODE

#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

size_t utf_len(const char* utf_len, int byte_len);

size_t ascii_encoding(int src, int dst);

size_t utf8_encoding(uint8_t src, uint8_t dst);

size_t utf16_encoding(uint16_t src, uint16_t dst);

size_t utf32_encoding(uint32_t src, uint32_t dst);

size_t bocu_encoding(uint32_t src, uint32_t dst);

size_t scsu_encoding(uint16_t src, uint16_t dst);

size_t gb18030_encoding(uint16_t src, uint16_t dst);

size_t ucs2_encoding(uint8_t src, uint8_t dst);

