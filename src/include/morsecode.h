/*
* Copyright 2013 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#include <inttypes.h>

#define STD_WORD_PARIS_LEN 50
#define STD_WORD_CODEX_LEN 60

/*
 * Text representation of morse code.
 *
 * dot .
 * dash -
 * gap between charachters c
 * gap between words w
 */
typedef char* TextMorseCode;

typedef enum {
   DOT      = '.',
   DASH     = '-',
   CHAR_GAP = 'c',
   WORD_GAP = 'w'
} MorseCodeElement;

/*enum MorseProSign {

}*/

TextMorseCode textMorseCodeFromAscii(char character);

char asciiFromTextMorseCode(TextMorseCode code);

double codeElementTime(MorseCodeElement element, uint8_t wordsPerMinute, uint8_t stdWordLength);


