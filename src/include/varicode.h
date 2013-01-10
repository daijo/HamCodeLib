/*
* Copyright 2012 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#ifndef __VARICODE_H__
#define __VARICODE_H__

#include <inttypes.h>

typedef uint16_t varicode_t;

varicode_t ham_varicode_from_ascii(char character);

char ham_varicode_to_ascii(varicode_t code);

#endif
