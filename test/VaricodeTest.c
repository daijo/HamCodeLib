/*  
 * Copyright 2012 Daniel Hjort. All rights reserved.
 * Author: Daniel Hjort
 */

#include "varicode.h"
#include "CuTest.h"

void TestAsciiToVaricode(CuTest* tc)
{

	CuAssertTrue(tc, 0x2AB == varicodeFromAscii(0)); /* 0-31 Control chars */
	CuAssertTrue(tc, 0x2DB == varicodeFromAscii(1));
	CuAssertTrue(tc, 0x2ED == varicodeFromAscii(2));
	CuAssertTrue(tc, 0x377 == varicodeFromAscii(3));
	CuAssertTrue(tc, 0x2EB == varicodeFromAscii(4));
	CuAssertTrue(tc, 0x35F == varicodeFromAscii(5));
	CuAssertTrue(tc, 0x2EF == varicodeFromAscii(6));
	CuAssertTrue(tc, 0x2FD == varicodeFromAscii(7));
	CuAssertTrue(tc, 0x2FF == varicodeFromAscii(8));
	CuAssertTrue(tc, 0xEF == varicodeFromAscii(9));
	CuAssertTrue(tc, 0x1D == varicodeFromAscii(10));
	CuAssertTrue(tc, 0x36F == varicodeFromAscii(11));
	CuAssertTrue(tc, 0x2DD == varicodeFromAscii(12));
	CuAssertTrue(tc, 0x1F == varicodeFromAscii(13));
	CuAssertTrue(tc, 0x375 == varicodeFromAscii(14));
	CuAssertTrue(tc, 0x3AB == varicodeFromAscii(15));
	CuAssertTrue(tc, 0x2F7 == varicodeFromAscii(16));
	CuAssertTrue(tc, 0x2F5 == varicodeFromAscii(17));
	CuAssertTrue(tc, 0x3AD == varicodeFromAscii(18));
	CuAssertTrue(tc, 0x3AF == varicodeFromAscii(19));
	CuAssertTrue(tc, 0x35B == varicodeFromAscii(20));
	CuAssertTrue(tc, 0x36B == varicodeFromAscii(21));
	CuAssertTrue(tc, 0x36D == varicodeFromAscii(22));
	CuAssertTrue(tc, 0x357 == varicodeFromAscii(23));
	CuAssertTrue(tc, 0x37B == varicodeFromAscii(24));
	CuAssertTrue(tc, 0x37D == varicodeFromAscii(25));
	CuAssertTrue(tc, 0x3B7 == varicodeFromAscii(26));
	CuAssertTrue(tc, 0x355 == varicodeFromAscii(27));
	CuAssertTrue(tc, 0x35D == varicodeFromAscii(28));
	CuAssertTrue(tc, 0x3BB == varicodeFromAscii(29));
	CuAssertTrue(tc, 0x2FB == varicodeFromAscii(30));
	CuAssertTrue(tc, 0x37F == varicodeFromAscii(31));
	CuAssertTrue(tc, 0x1 == varicodeFromAscii(' ')); /* 32 */
	CuAssertTrue(tc, 0x1FF == varicodeFromAscii('!')); /* 33 */
	CuAssertTrue(tc, 0x15F == varicodeFromAscii('"')); /* 34 */
	CuAssertTrue(tc, 0x1F5 == varicodeFromAscii('#')); /* 35 */
	CuAssertTrue(tc, 0x1DB == varicodeFromAscii('$')); /* 36 */
	CuAssertTrue(tc, 0x2D5 == varicodeFromAscii('%')); /* 37 */
	CuAssertTrue(tc, 0x2BB == varicodeFromAscii('&')); /* 38 */
	CuAssertTrue(tc, 0x17F == varicodeFromAscii('\'')); /* 39 */
	CuAssertTrue(tc, 0xFB == varicodeFromAscii('(')); /* 40 */
	CuAssertTrue(tc, 0xF7 == varicodeFromAscii(')')); /* 41 */
	CuAssertTrue(tc, 0x16F == varicodeFromAscii('*')); /* 42 */
	CuAssertTrue(tc, 0x1DF == varicodeFromAscii('+')); /* 43 */
	CuAssertTrue(tc, 0x75 == varicodeFromAscii(',')); /* 44 */
	CuAssertTrue(tc, 0x35 == varicodeFromAscii('-')); /* 45 */
	CuAssertTrue(tc, 0x57 == varicodeFromAscii('.')); /* 46 */
	CuAssertTrue(tc, 0x1AF == varicodeFromAscii('/')); /* 47 */
	CuAssertTrue(tc, 0xB7 == varicodeFromAscii('0')); /* 48 */
	CuAssertTrue(tc, 0xBD == varicodeFromAscii('1')); /* 49 */
	CuAssertTrue(tc, 0xED == varicodeFromAscii('2')); /* 50 */
	CuAssertTrue(tc, 0xFF == varicodeFromAscii('3')); /* 51 */
	CuAssertTrue(tc, 0x177 == varicodeFromAscii('4')); /* 52 */
	CuAssertTrue(tc, 0x15B == varicodeFromAscii('5')); /* 53 */
	CuAssertTrue(tc, 0x16B == varicodeFromAscii('6')); /* 54 */
	CuAssertTrue(tc, 0x1AD == varicodeFromAscii('7')); /* 55 */
	CuAssertTrue(tc, 0x1AB == varicodeFromAscii('8')); /* 56 */
	CuAssertTrue(tc, 0x1B7 == varicodeFromAscii('9')); /* 57 */
	CuAssertTrue(tc, 0xF5 == varicodeFromAscii(':')); /* 58 */
	CuAssertTrue(tc, 0x1BD == varicodeFromAscii(';')); /* 59 */
	CuAssertTrue(tc, 0x1ED == varicodeFromAscii('<')); /* 60 */
	CuAssertTrue(tc, 0x55 == varicodeFromAscii('=')); /* 61 */
	CuAssertTrue(tc, 0x1D7 == varicodeFromAscii('>')); /* 62 */
	CuAssertTrue(tc, 0x2AF == varicodeFromAscii('?')); /* 63 */
	CuAssertTrue(tc, 0x2BD == varicodeFromAscii('@')); /* 64 */
	CuAssertTrue(tc, 0x7D == varicodeFromAscii('A')); /* 65 */
	CuAssertTrue(tc, 0xEB == varicodeFromAscii('B')); /* 66 */
	CuAssertTrue(tc, 0xAD == varicodeFromAscii('C')); /* 67 */
	CuAssertTrue(tc, 0xB5 == varicodeFromAscii('D')); /* 68 */
	CuAssertTrue(tc, 0x77 == varicodeFromAscii('E')); /* 69 */
	CuAssertTrue(tc, 0xDB == varicodeFromAscii('F')); /* 70 */
	CuAssertTrue(tc, 0xFD == varicodeFromAscii('G')); /* 71 */
	CuAssertTrue(tc, 0x155 == varicodeFromAscii('H')); /* 72 */
	CuAssertTrue(tc, 0x7F == varicodeFromAscii('I')); /* 73 */
	CuAssertTrue(tc, 0x1FD == varicodeFromAscii('J')); /* 74 */
	CuAssertTrue(tc, 0x17D == varicodeFromAscii('K')); /* 75 */
	CuAssertTrue(tc, 0xD7 == varicodeFromAscii('L')); /* 76 */
	CuAssertTrue(tc, 0xBB == varicodeFromAscii('M')); /* 77 */
	CuAssertTrue(tc, 0xDD == varicodeFromAscii('N')); /* 78 */
	CuAssertTrue(tc, 0xAB == varicodeFromAscii('O')); /* 79 */
	CuAssertTrue(tc, 0xD5 == varicodeFromAscii('P')); /* 80 */
	CuAssertTrue(tc, 0x1DD == varicodeFromAscii('Q')); /* 81 */
	CuAssertTrue(tc, 0xAF == varicodeFromAscii('R')); /* 82 */
	CuAssertTrue(tc, 0x6F == varicodeFromAscii('S')); /* 83 */
	CuAssertTrue(tc, 0x6D == varicodeFromAscii('T')); /* 84 */
	CuAssertTrue(tc, 0x157 == varicodeFromAscii('U')); /* 85 */
	CuAssertTrue(tc, 0x1B5 == varicodeFromAscii('V')); /* 86 */
	CuAssertTrue(tc, 0x15D == varicodeFromAscii('W')); /* 87 */
	CuAssertTrue(tc, 0x175 == varicodeFromAscii('X')); /* 88 */
	CuAssertTrue(tc, 0x17B == varicodeFromAscii('Y')); /* 89 */
	CuAssertTrue(tc, 0x2AD == varicodeFromAscii('Z')); /* 90 */
	CuAssertTrue(tc, 0x1F7 == varicodeFromAscii('[')); /* 91 */
	CuAssertTrue(tc, 0x1EF == varicodeFromAscii('\\')); /* 92 */
	CuAssertTrue(tc, 0x1FB == varicodeFromAscii(']')); /* 93 */
	CuAssertTrue(tc, 0x2BF == varicodeFromAscii('^')); /* 94 */
	CuAssertTrue(tc, 0x16D == varicodeFromAscii('_')); /* 95 */
	CuAssertTrue(tc, 0x2DF == varicodeFromAscii('`')); /* 96 */
	CuAssertTrue(tc, 0xB == varicodeFromAscii('a')); /* 97 */
	CuAssertTrue(tc, 0x5F == varicodeFromAscii('b')); /* 98 */
	CuAssertTrue(tc, 0x2F == varicodeFromAscii('c')); /* 99 */
	CuAssertTrue(tc, 0x2D == varicodeFromAscii('d')); /* 100 */
	CuAssertTrue(tc, 0x3 == varicodeFromAscii('e')); /* 101 */
	CuAssertTrue(tc, 0x3D == varicodeFromAscii('f')); /* 102 */
	CuAssertTrue(tc, 0x5B == varicodeFromAscii('g')); /* 103 */
	CuAssertTrue(tc, 0x2B == varicodeFromAscii('h')); /* 104 */
	CuAssertTrue(tc, 0xD == varicodeFromAscii('i')); /* 105 */
	CuAssertTrue(tc, 0x1EB == varicodeFromAscii('j')); /* 106 */
	CuAssertTrue(tc, 0xBF == varicodeFromAscii('k')); /* 107 */
	CuAssertTrue(tc, 0x1B == varicodeFromAscii('l')); /* 108 */
	CuAssertTrue(tc, 0x3B == varicodeFromAscii('m')); /* 109 */
	CuAssertTrue(tc, 0xF == varicodeFromAscii('n')); /* 110 */
	CuAssertTrue(tc, 0x7 == varicodeFromAscii('o')); /* 111 */
	CuAssertTrue(tc, 0x3F == varicodeFromAscii('p')); /* 112 */
	CuAssertTrue(tc, 0x1BF == varicodeFromAscii('q')); /* 113 */
	CuAssertTrue(tc, 0x15 == varicodeFromAscii('r')); /* 114 */
	CuAssertTrue(tc, 0x17 == varicodeFromAscii('s')); /* 115 */
	CuAssertTrue(tc, 0x5 == varicodeFromAscii('t')); /* 116 */
	CuAssertTrue(tc, 0x37 == varicodeFromAscii('u')); /* 117 */
	CuAssertTrue(tc, 0x7B == varicodeFromAscii('v')); /* 118 */
	CuAssertTrue(tc, 0x6B == varicodeFromAscii('w')); /* 119 */
	CuAssertTrue(tc, 0xDF == varicodeFromAscii('x')); /* 120 */
	CuAssertTrue(tc, 0x5D == varicodeFromAscii('y')); /* 121 */
	CuAssertTrue(tc, 0x1D5 == varicodeFromAscii('z')); /* 122 */
	CuAssertTrue(tc, 0x2B7 == varicodeFromAscii('{')); /* 123 */
	CuAssertTrue(tc, 0x1BB == varicodeFromAscii('|')); /* 124 */
	CuAssertTrue(tc, 0x2B5 == varicodeFromAscii('}')); /* 125 */
	CuAssertTrue(tc, 0x2D7 == varicodeFromAscii('~')); /* 126 */
	CuAssertTrue(tc, 0x3B5 == varicodeFromAscii(127)); /* 127 Delete*/

}
