/*
* Copyright 2013 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#include "morsecode.h"
#include "morsecode_data.h"
#include <string.h>

TextMorseCode textMorseCodeFromAscii(char character)
{
	TextMorseCode result = "not found";
	char toFind = character;

	if (toFind >= 'a' && toFind <= 'z') {
		toFind = toFind ^ (0x1 << 5);
	}

	for (int i = 0; i < NUMBER_OF_MORSECODES; i++) {
		
		if (toFind == ascii[i]) {
			result = morse[i];
			break;
		}
	}

	return result;
}

char asciiFromTextMorseCode(TextMorseCode code)
{
	char result;

	for (int i = 0; i < NUMBER_OF_MORSECODES; i++) {

		if (0 == strcmp(code, morse[i])) {

			result = ascii[i];
			break;
		}
	}

	return result;
}

double codeElementTime(MorseCodeElement element, uint8_t wordsPerMinute, uint8_t stdWordLength)
{
	double unitTime = (1.2 / wordsPerMinute) * (50.0/stdWordLength);
	uint8_t numberOfUnits = 0;

	switch (element) {

		case DOT:
			numberOfUnits = 1;
		break;
		case DASH:
		case CHAR_GAP:
			numberOfUnits = 3;
		break;
		case WORD_GAP:
			numberOfUnits = 7;
		break;
		default:
		break;
	}

	return unitTime * numberOfUnits;
}

