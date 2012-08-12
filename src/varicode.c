/*
* Copyright 2012 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#include "varicode.h"
#include "varicode_data.h"

varicode_t varicodeFromAscii(char character)
{
	return codes[(uint8_t)character];
}

char asciiFromVaricode(varicode_t code)
{
	uint8_t result = 0;

	while (result < 128) {
		if(codes[result] == code) {
			break;
		}
		result++;
	}

	return (char)result;
}
