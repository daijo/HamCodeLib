/*  
 * Copyright 2013 Daniel Hjort. All rights reserved.
 * Author: Daniel Hjort
 */

#include "morsecode.h"
#include "CuTest.h"
#include <math.h>

#define TEST_TEXT "The quick brown fox jumps over the lazy dog"
#define TEST_CODE "-c....c.w--.-c..-c..c-.-.c-.-w-...c.-.c---c.--c-.w..-.c---c-..-w.---c..-c--c.--.c...w---c...-c.c.-.w-c....c.w.-..c.-c--..c-.--w-..c---c--."

void TestAsciiToMorsecode(CuTest* tc)
{
	CuAssertStrEquals(tc, ".-", textMorseCodeFromAscii('a'));
	CuAssertStrEquals(tc, "-...", textMorseCodeFromAscii('b'));
	CuAssertStrEquals(tc, "-.-.", textMorseCodeFromAscii('c'));
	CuAssertStrEquals(tc, "-..", textMorseCodeFromAscii('d'));
	CuAssertStrEquals(tc, ".", textMorseCodeFromAscii('e'));
	CuAssertStrEquals(tc, "..-.", textMorseCodeFromAscii('f'));
	CuAssertStrEquals(tc, "--.", textMorseCodeFromAscii('g'));
	CuAssertStrEquals(tc, "....", textMorseCodeFromAscii('h'));
	CuAssertStrEquals(tc, "..", textMorseCodeFromAscii('i'));
	CuAssertStrEquals(tc, ".---", textMorseCodeFromAscii('j'));
	CuAssertStrEquals(tc, "-.-", textMorseCodeFromAscii('k'));
	CuAssertStrEquals(tc, ".-..", textMorseCodeFromAscii('l'));
	CuAssertStrEquals(tc, "--", textMorseCodeFromAscii('m'));
	CuAssertStrEquals(tc, "-.", textMorseCodeFromAscii('n'));
	CuAssertStrEquals(tc, "---", textMorseCodeFromAscii('o'));
	CuAssertStrEquals(tc, ".--.", textMorseCodeFromAscii('p'));
	CuAssertStrEquals(tc, "--.-", textMorseCodeFromAscii('q'));
	CuAssertStrEquals(tc, ".-.", textMorseCodeFromAscii('r'));
	CuAssertStrEquals(tc, "...", textMorseCodeFromAscii('s'));
	CuAssertStrEquals(tc, "-", textMorseCodeFromAscii('t'));
	CuAssertStrEquals(tc, "..-", textMorseCodeFromAscii('u'));
	CuAssertStrEquals(tc, "...-", textMorseCodeFromAscii('v'));
	CuAssertStrEquals(tc, ".--", textMorseCodeFromAscii('w'));
	CuAssertStrEquals(tc, "-..-", textMorseCodeFromAscii('x'));
	CuAssertStrEquals(tc, "-.--", textMorseCodeFromAscii('y'));
	CuAssertStrEquals(tc, "--..", textMorseCodeFromAscii('z'));
	CuAssertStrEquals(tc, "-----", textMorseCodeFromAscii('0'));
	CuAssertStrEquals(tc, ".----", textMorseCodeFromAscii('1'));
	CuAssertStrEquals(tc, "..---", textMorseCodeFromAscii('2'));
	CuAssertStrEquals(tc, "...--", textMorseCodeFromAscii('3'));
	CuAssertStrEquals(tc, "....-", textMorseCodeFromAscii('4'));
	CuAssertStrEquals(tc, ".....", textMorseCodeFromAscii('5'));
	CuAssertStrEquals(tc, "-....", textMorseCodeFromAscii('6'));
	CuAssertStrEquals(tc, "--...", textMorseCodeFromAscii('7'));
	CuAssertStrEquals(tc, "---..", textMorseCodeFromAscii('8'));
	CuAssertStrEquals(tc, "----.", textMorseCodeFromAscii('9'));
	CuAssertStrEquals(tc, ".-.-.-", textMorseCodeFromAscii('.'));
	CuAssertStrEquals(tc, "--..--", textMorseCodeFromAscii(','));
	CuAssertStrEquals(tc, "..--..", textMorseCodeFromAscii('?'));
	CuAssertStrEquals(tc, ".----.", textMorseCodeFromAscii('\''));
	CuAssertStrEquals(tc, "-.-.--", textMorseCodeFromAscii('!'));
	CuAssertStrEquals(tc, "-..-.", textMorseCodeFromAscii('/'));
	CuAssertStrEquals(tc, "-.--.", textMorseCodeFromAscii('('));
	CuAssertStrEquals(tc, "-.--.-", textMorseCodeFromAscii(')'));
	CuAssertStrEquals(tc, ".-...", textMorseCodeFromAscii('&'));
	CuAssertStrEquals(tc, "---...", textMorseCodeFromAscii(':'));
	CuAssertStrEquals(tc, "-.-.-.", textMorseCodeFromAscii(';'));
	CuAssertStrEquals(tc, "-...-", textMorseCodeFromAscii('='));
	CuAssertStrEquals(tc, ".-.-.", textMorseCodeFromAscii('+'));
	CuAssertStrEquals(tc, "-....-", textMorseCodeFromAscii('-'));
	CuAssertStrEquals(tc, "..--.-", textMorseCodeFromAscii('_'));
	CuAssertStrEquals(tc, ".-..-.", textMorseCodeFromAscii('"'));
	CuAssertStrEquals(tc, "...-..-", textMorseCodeFromAscii('$'));
	CuAssertStrEquals(tc, ".--.-.", textMorseCodeFromAscii('@'));
}

void TestMorsecodeToAscii(CuTest* tc)
{
	CuAssertTrue(tc, 'A' == asciiFromTextMorseCode(".-"));
	CuAssertTrue(tc, 'B' == asciiFromTextMorseCode("-..."));
	CuAssertTrue(tc, 'C' == asciiFromTextMorseCode("-.-."));
	CuAssertTrue(tc, 'D' == asciiFromTextMorseCode("-.."));
	CuAssertTrue(tc, 'E' == asciiFromTextMorseCode("."));
	CuAssertTrue(tc, 'F' == asciiFromTextMorseCode("..-."));
	CuAssertTrue(tc, 'G' == asciiFromTextMorseCode("--."));
	CuAssertTrue(tc, 'H' == asciiFromTextMorseCode("...."));
	CuAssertTrue(tc, 'I' == asciiFromTextMorseCode(".."));
	CuAssertTrue(tc, 'J' == asciiFromTextMorseCode(".---"));
	CuAssertTrue(tc, 'K' == asciiFromTextMorseCode("-.-"));
	CuAssertTrue(tc, 'L' == asciiFromTextMorseCode(".-.."));
	CuAssertTrue(tc, 'M' == asciiFromTextMorseCode("--"));
	CuAssertTrue(tc, 'N' == asciiFromTextMorseCode("-."));
	CuAssertTrue(tc, 'O' == asciiFromTextMorseCode("---"));
	CuAssertTrue(tc, 'P' == asciiFromTextMorseCode(".--."));
	CuAssertTrue(tc, 'Q' == asciiFromTextMorseCode("--.-"));
	CuAssertTrue(tc, 'R' == asciiFromTextMorseCode(".-."));
	CuAssertTrue(tc, 'S' == asciiFromTextMorseCode("..."));
	CuAssertTrue(tc, 'T' == asciiFromTextMorseCode("-"));
	CuAssertTrue(tc, 'U' == asciiFromTextMorseCode("..-"));
	CuAssertTrue(tc, 'V' == asciiFromTextMorseCode("...-"));
	CuAssertTrue(tc, 'W' == asciiFromTextMorseCode(".--"));
	CuAssertTrue(tc, 'X' == asciiFromTextMorseCode("-..-"));
	CuAssertTrue(tc, 'Y' == asciiFromTextMorseCode("-.--"));
	CuAssertTrue(tc, 'Z' == asciiFromTextMorseCode("--.."));
	CuAssertTrue(tc, '0' == asciiFromTextMorseCode("-----"));
	CuAssertTrue(tc, '1' == asciiFromTextMorseCode(".----"));
	CuAssertTrue(tc, '2' == asciiFromTextMorseCode("..---"));
	CuAssertTrue(tc, '3' == asciiFromTextMorseCode("...--"));
	CuAssertTrue(tc, '4' == asciiFromTextMorseCode("....-"));
	CuAssertTrue(tc, '5' == asciiFromTextMorseCode("....."));
	CuAssertTrue(tc, '6' == asciiFromTextMorseCode("-...."));
	CuAssertTrue(tc, '7' == asciiFromTextMorseCode("--..."));
	CuAssertTrue(tc, '8' == asciiFromTextMorseCode("---.."));
	CuAssertTrue(tc, '9' == asciiFromTextMorseCode("----."));
	CuAssertTrue(tc, '.' == asciiFromTextMorseCode(".-.-.-"));
	CuAssertTrue(tc, ',' == asciiFromTextMorseCode("--..--"));
	CuAssertTrue(tc, '?' == asciiFromTextMorseCode("..--.."));
	CuAssertTrue(tc, '\'' == asciiFromTextMorseCode(".----."));
	CuAssertTrue(tc, '!' == asciiFromTextMorseCode("-.-.--"));
	CuAssertTrue(tc, '/' == asciiFromTextMorseCode("-..-."));
	CuAssertTrue(tc, '(' == asciiFromTextMorseCode("-.--."));
	CuAssertTrue(tc, ')' == asciiFromTextMorseCode("-.--.-"));
	CuAssertTrue(tc, '&' == asciiFromTextMorseCode(".-..."));
	CuAssertTrue(tc, ':' == asciiFromTextMorseCode("---..."));
	CuAssertTrue(tc, ';' == asciiFromTextMorseCode("-.-.-."));
	CuAssertTrue(tc, '=' == asciiFromTextMorseCode("-...-"));
	CuAssertTrue(tc, '+' == asciiFromTextMorseCode(".-.-."));
	CuAssertTrue(tc, '-' == asciiFromTextMorseCode("-....-"));
	CuAssertTrue(tc, '_' == asciiFromTextMorseCode("..--.-"));
	CuAssertTrue(tc, '"' == asciiFromTextMorseCode(".-..-."));
	CuAssertTrue(tc, '$' == asciiFromTextMorseCode("...-..-"));
	CuAssertTrue(tc, '@' == asciiFromTextMorseCode(".--.-."));
}

void TestCodeElementTime(CuTest* tc)
{
	CuAssertTrue(tc, codeElementTime(DOT, 20, STD_WORD_PARIS_LEN) == 0.06);
	CuAssertTrue(tc, codeElementTime(DASH, 20, STD_WORD_PARIS_LEN) == 0.18);
	CuAssertTrue(tc, codeElementTime(CHAR_GAP, 20, STD_WORD_PARIS_LEN) == 0.18);
	CuAssertTrue(tc, codeElementTime(WORD_GAP, 20, STD_WORD_PARIS_LEN) == 0.42);
	CuAssertTrue(tc, fabs(codeElementTime(DOT, 20, STD_WORD_CODEX_LEN) - 0.05) <  0.001);
	CuAssertTrue(tc, fabs(codeElementTime(DASH, 20, STD_WORD_CODEX_LEN) - 0.15) <  0.001);
	CuAssertTrue(tc, fabs(codeElementTime(CHAR_GAP, 20, STD_WORD_CODEX_LEN) - 0.15) <  0.001);
	CuAssertTrue(tc, fabs(codeElementTime(WORD_GAP, 20, STD_WORD_CODEX_LEN) - 0.35) <  0.001);
}
