/*
* Copyright 2012 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#include <inttypes.h>

typedef uint16_t varicode_t;

varicode_t varicodeFromAscii(char character);
char asciiFromVaricode(varicode_t code);