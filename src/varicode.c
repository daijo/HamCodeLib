/*
* Copyright 2012 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#include "varicode.h"

/* Data */

varicode_t codes[127] = { \
	0x2AB /* NUL 0 */, \
	0x2DB /* SOH 1 */, \
	};

/* Functions */

varicode_t varicodeFromAscii(char character)
{

	return codes[(uint8_t)character];
}

char asciiFromVaricode(varicode_t code)
{
	return 'a'; /* traverse huffman tree. */
}
