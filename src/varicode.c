/*
* Copyright 2012 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#include "varicode.h"
#include "varicode_data.h"

varicode_t ham_varicode_from_ascii(char character)
{
	return codes[(uint8_t)character];
}

char ham_varicode_to_ascii(varicode_t code)
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
