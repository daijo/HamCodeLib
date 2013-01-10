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
	CuAssertStrEquals(tc, ".-", ham_morse_from_ascii('a'));
	CuAssertStrEquals(tc, "-...", ham_morse_from_ascii('b'));
	CuAssertStrEquals(tc, "-.-.", ham_morse_from_ascii('c'));
	CuAssertStrEquals(tc, "-..", ham_morse_from_ascii('d'));
	CuAssertStrEquals(tc, ".", ham_morse_from_ascii('e'));
	CuAssertStrEquals(tc, "..-.", ham_morse_from_ascii('f'));
	CuAssertStrEquals(tc, "--.", ham_morse_from_ascii('g'));
	CuAssertStrEquals(tc, "....", ham_morse_from_ascii('h'));
	CuAssertStrEquals(tc, "..", ham_morse_from_ascii('i'));
	CuAssertStrEquals(tc, ".---", ham_morse_from_ascii('j'));
	CuAssertStrEquals(tc, "-.-", ham_morse_from_ascii('k'));
	CuAssertStrEquals(tc, ".-..", ham_morse_from_ascii('l'));
	CuAssertStrEquals(tc, "--", ham_morse_from_ascii('m'));
	CuAssertStrEquals(tc, "-.", ham_morse_from_ascii('n'));
	CuAssertStrEquals(tc, "---", ham_morse_from_ascii('o'));
	CuAssertStrEquals(tc, ".--.", ham_morse_from_ascii('p'));
	CuAssertStrEquals(tc, "--.-", ham_morse_from_ascii('q'));
	CuAssertStrEquals(tc, ".-.", ham_morse_from_ascii('r'));
	CuAssertStrEquals(tc, "...", ham_morse_from_ascii('s'));
	CuAssertStrEquals(tc, "-", ham_morse_from_ascii('t'));
	CuAssertStrEquals(tc, "..-", ham_morse_from_ascii('u'));
	CuAssertStrEquals(tc, "...-", ham_morse_from_ascii('v'));
	CuAssertStrEquals(tc, ".--", ham_morse_from_ascii('w'));
	CuAssertStrEquals(tc, "-..-", ham_morse_from_ascii('x'));
	CuAssertStrEquals(tc, "-.--", ham_morse_from_ascii('y'));
	CuAssertStrEquals(tc, "--..", ham_morse_from_ascii('z'));
	CuAssertStrEquals(tc, "-----", ham_morse_from_ascii('0'));
	CuAssertStrEquals(tc, ".----", ham_morse_from_ascii('1'));
	CuAssertStrEquals(tc, "..---", ham_morse_from_ascii('2'));
	CuAssertStrEquals(tc, "...--", ham_morse_from_ascii('3'));
	CuAssertStrEquals(tc, "....-", ham_morse_from_ascii('4'));
	CuAssertStrEquals(tc, ".....", ham_morse_from_ascii('5'));
	CuAssertStrEquals(tc, "-....", ham_morse_from_ascii('6'));
	CuAssertStrEquals(tc, "--...", ham_morse_from_ascii('7'));
	CuAssertStrEquals(tc, "---..", ham_morse_from_ascii('8'));
	CuAssertStrEquals(tc, "----.", ham_morse_from_ascii('9'));
	CuAssertStrEquals(tc, ".-.-.-", ham_morse_from_ascii('.'));
	CuAssertStrEquals(tc, "--..--", ham_morse_from_ascii(','));
	CuAssertStrEquals(tc, "..--..", ham_morse_from_ascii('?'));
	CuAssertStrEquals(tc, ".----.", ham_morse_from_ascii('\''));
	CuAssertStrEquals(tc, "-.-.--", ham_morse_from_ascii('!'));
	CuAssertStrEquals(tc, "-..-.", ham_morse_from_ascii('/'));
	CuAssertStrEquals(tc, "-.--.", ham_morse_from_ascii('('));
	CuAssertStrEquals(tc, "-.--.-", ham_morse_from_ascii(')'));
	CuAssertStrEquals(tc, ".-...", ham_morse_from_ascii('&'));
	CuAssertStrEquals(tc, "---...", ham_morse_from_ascii(':'));
	CuAssertStrEquals(tc, "-.-.-.", ham_morse_from_ascii(';'));
	CuAssertStrEquals(tc, "-...-", ham_morse_from_ascii('='));
	CuAssertStrEquals(tc, ".-.-.", ham_morse_from_ascii('+'));
	CuAssertStrEquals(tc, "-....-", ham_morse_from_ascii('-'));
	CuAssertStrEquals(tc, "..--.-", ham_morse_from_ascii('_'));
	CuAssertStrEquals(tc, ".-..-.", ham_morse_from_ascii('"'));
	CuAssertStrEquals(tc, "...-..-", ham_morse_from_ascii('$'));
	CuAssertStrEquals(tc, ".--.-.", ham_morse_from_ascii('@'));
}

void TestMorsecodeToAscii(CuTest* tc)
{
	CuAssertTrue(tc, 'A' == ham_morse_to_ascii(".-"));
	CuAssertTrue(tc, 'B' == ham_morse_to_ascii("-..."));
	CuAssertTrue(tc, 'C' == ham_morse_to_ascii("-.-."));
	CuAssertTrue(tc, 'D' == ham_morse_to_ascii("-.."));
	CuAssertTrue(tc, 'E' == ham_morse_to_ascii("."));
	CuAssertTrue(tc, 'F' == ham_morse_to_ascii("..-."));
	CuAssertTrue(tc, 'G' == ham_morse_to_ascii("--."));
	CuAssertTrue(tc, 'H' == ham_morse_to_ascii("...."));
	CuAssertTrue(tc, 'I' == ham_morse_to_ascii(".."));
	CuAssertTrue(tc, 'J' == ham_morse_to_ascii(".---"));
	CuAssertTrue(tc, 'K' == ham_morse_to_ascii("-.-"));
	CuAssertTrue(tc, 'L' == ham_morse_to_ascii(".-.."));
	CuAssertTrue(tc, 'M' == ham_morse_to_ascii("--"));
	CuAssertTrue(tc, 'N' == ham_morse_to_ascii("-."));
	CuAssertTrue(tc, 'O' == ham_morse_to_ascii("---"));
	CuAssertTrue(tc, 'P' == ham_morse_to_ascii(".--."));
	CuAssertTrue(tc, 'Q' == ham_morse_to_ascii("--.-"));
	CuAssertTrue(tc, 'R' == ham_morse_to_ascii(".-."));
	CuAssertTrue(tc, 'S' == ham_morse_to_ascii("..."));
	CuAssertTrue(tc, 'T' == ham_morse_to_ascii("-"));
	CuAssertTrue(tc, 'U' == ham_morse_to_ascii("..-"));
	CuAssertTrue(tc, 'V' == ham_morse_to_ascii("...-"));
	CuAssertTrue(tc, 'W' == ham_morse_to_ascii(".--"));
	CuAssertTrue(tc, 'X' == ham_morse_to_ascii("-..-"));
	CuAssertTrue(tc, 'Y' == ham_morse_to_ascii("-.--"));
	CuAssertTrue(tc, 'Z' == ham_morse_to_ascii("--.."));
	CuAssertTrue(tc, '0' == ham_morse_to_ascii("-----"));
	CuAssertTrue(tc, '1' == ham_morse_to_ascii(".----"));
	CuAssertTrue(tc, '2' == ham_morse_to_ascii("..---"));
	CuAssertTrue(tc, '3' == ham_morse_to_ascii("...--"));
	CuAssertTrue(tc, '4' == ham_morse_to_ascii("....-"));
	CuAssertTrue(tc, '5' == ham_morse_to_ascii("....."));
	CuAssertTrue(tc, '6' == ham_morse_to_ascii("-...."));
	CuAssertTrue(tc, '7' == ham_morse_to_ascii("--..."));
	CuAssertTrue(tc, '8' == ham_morse_to_ascii("---.."));
	CuAssertTrue(tc, '9' == ham_morse_to_ascii("----."));
	CuAssertTrue(tc, '.' == ham_morse_to_ascii(".-.-.-"));
	CuAssertTrue(tc, ',' == ham_morse_to_ascii("--..--"));
	CuAssertTrue(tc, '?' == ham_morse_to_ascii("..--.."));
	CuAssertTrue(tc, '\'' == ham_morse_to_ascii(".----."));
	CuAssertTrue(tc, '!' == ham_morse_to_ascii("-.-.--"));
	CuAssertTrue(tc, '/' == ham_morse_to_ascii("-..-."));
	CuAssertTrue(tc, '(' == ham_morse_to_ascii("-.--."));
	CuAssertTrue(tc, ')' == ham_morse_to_ascii("-.--.-"));
	CuAssertTrue(tc, '&' == ham_morse_to_ascii(".-..."));
	CuAssertTrue(tc, ':' == ham_morse_to_ascii("---..."));
	CuAssertTrue(tc, ';' == ham_morse_to_ascii("-.-.-."));
	CuAssertTrue(tc, '=' == ham_morse_to_ascii("-...-"));
	CuAssertTrue(tc, '+' == ham_morse_to_ascii(".-.-."));
	CuAssertTrue(tc, '-' == ham_morse_to_ascii("-....-"));
	CuAssertTrue(tc, '_' == ham_morse_to_ascii("..--.-"));
	CuAssertTrue(tc, '"' == ham_morse_to_ascii(".-..-."));
	CuAssertTrue(tc, '$' == ham_morse_to_ascii("...-..-"));
	CuAssertTrue(tc, '@' == ham_morse_to_ascii(".--.-."));
}

void Testham_morse_element_time(CuTest* tc)
{
	CuAssertTrue(tc, ham_morse_element_time(DOT, 20, STD_WORD_PARIS_LEN) == 0.06);
	CuAssertTrue(tc, ham_morse_element_time(DASH, 20, STD_WORD_PARIS_LEN) == 0.18);
	CuAssertTrue(tc, ham_morse_element_time(CHAR_GAP, 20, STD_WORD_PARIS_LEN) == 0.18);
	CuAssertTrue(tc, ham_morse_element_time(WORD_GAP, 20, STD_WORD_PARIS_LEN) == 0.42);
	CuAssertTrue(tc, fabs(ham_morse_element_time(DOT, 20, STD_WORD_CODEX_LEN) - 0.05) <  0.001);
	CuAssertTrue(tc, fabs(ham_morse_element_time(DASH, 20, STD_WORD_CODEX_LEN) - 0.15) <  0.001);
	CuAssertTrue(tc, fabs(ham_morse_element_time(CHAR_GAP, 20, STD_WORD_CODEX_LEN) - 0.15) <  0.001);
	CuAssertTrue(tc, fabs(ham_morse_element_time(WORD_GAP, 20, STD_WORD_CODEX_LEN) - 0.35) <  0.001);
}
