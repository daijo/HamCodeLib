/*  
 * Copyright 2012 Daniel Hjort. All rights reserved.
 * Author: Daniel Hjort
 */

#include "varicode.h"
#include "CuTest.h"

void TestAsciiToVaricode(CuTest* tc)
{

	CuAssertTrue(tc, 0x2AB == ham_varicode_from_ascii(0)); /* 0-31 Control chars */
	CuAssertTrue(tc, 0x2DB == ham_varicode_from_ascii(1));
	CuAssertTrue(tc, 0x2ED == ham_varicode_from_ascii(2));
	CuAssertTrue(tc, 0x377 == ham_varicode_from_ascii(3));
	CuAssertTrue(tc, 0x2EB == ham_varicode_from_ascii(4));
	CuAssertTrue(tc, 0x35F == ham_varicode_from_ascii(5));
	CuAssertTrue(tc, 0x2EF == ham_varicode_from_ascii(6));
	CuAssertTrue(tc, 0x2FD == ham_varicode_from_ascii(7));
	CuAssertTrue(tc, 0x2FF == ham_varicode_from_ascii(8));
	CuAssertTrue(tc, 0xEF == ham_varicode_from_ascii(9));
	CuAssertTrue(tc, 0x1D == ham_varicode_from_ascii(10));
	CuAssertTrue(tc, 0x36F == ham_varicode_from_ascii(11));
	CuAssertTrue(tc, 0x2DD == ham_varicode_from_ascii(12));
	CuAssertTrue(tc, 0x1F == ham_varicode_from_ascii(13));
	CuAssertTrue(tc, 0x375 == ham_varicode_from_ascii(14));
	CuAssertTrue(tc, 0x3AB == ham_varicode_from_ascii(15));
	CuAssertTrue(tc, 0x2F7 == ham_varicode_from_ascii(16));
	CuAssertTrue(tc, 0x2F5 == ham_varicode_from_ascii(17));
	CuAssertTrue(tc, 0x3AD == ham_varicode_from_ascii(18));
	CuAssertTrue(tc, 0x3AF == ham_varicode_from_ascii(19));
	CuAssertTrue(tc, 0x35B == ham_varicode_from_ascii(20));
	CuAssertTrue(tc, 0x36B == ham_varicode_from_ascii(21));
	CuAssertTrue(tc, 0x36D == ham_varicode_from_ascii(22));
	CuAssertTrue(tc, 0x357 == ham_varicode_from_ascii(23));
	CuAssertTrue(tc, 0x37B == ham_varicode_from_ascii(24));
	CuAssertTrue(tc, 0x37D == ham_varicode_from_ascii(25));
	CuAssertTrue(tc, 0x3B7 == ham_varicode_from_ascii(26));
	CuAssertTrue(tc, 0x355 == ham_varicode_from_ascii(27));
	CuAssertTrue(tc, 0x35D == ham_varicode_from_ascii(28));
	CuAssertTrue(tc, 0x3BB == ham_varicode_from_ascii(29));
	CuAssertTrue(tc, 0x2FB == ham_varicode_from_ascii(30));
	CuAssertTrue(tc, 0x37F == ham_varicode_from_ascii(31));
	CuAssertTrue(tc, 0x1 == ham_varicode_from_ascii(' ')); /* 32 */
	CuAssertTrue(tc, 0x1FF == ham_varicode_from_ascii('!')); /* 33 */
	CuAssertTrue(tc, 0x15F == ham_varicode_from_ascii('"')); /* 34 */
	CuAssertTrue(tc, 0x1F5 == ham_varicode_from_ascii('#')); /* 35 */
	CuAssertTrue(tc, 0x1DB == ham_varicode_from_ascii('$')); /* 36 */
	CuAssertTrue(tc, 0x2D5 == ham_varicode_from_ascii('%')); /* 37 */
	CuAssertTrue(tc, 0x2BB == ham_varicode_from_ascii('&')); /* 38 */
	CuAssertTrue(tc, 0x17F == ham_varicode_from_ascii('\'')); /* 39 */
	CuAssertTrue(tc, 0xFB == ham_varicode_from_ascii('(')); /* 40 */
	CuAssertTrue(tc, 0xF7 == ham_varicode_from_ascii(')')); /* 41 */
	CuAssertTrue(tc, 0x16F == ham_varicode_from_ascii('*')); /* 42 */
	CuAssertTrue(tc, 0x1DF == ham_varicode_from_ascii('+')); /* 43 */
	CuAssertTrue(tc, 0x75 == ham_varicode_from_ascii(',')); /* 44 */
	CuAssertTrue(tc, 0x35 == ham_varicode_from_ascii('-')); /* 45 */
	CuAssertTrue(tc, 0x57 == ham_varicode_from_ascii('.')); /* 46 */
	CuAssertTrue(tc, 0x1AF == ham_varicode_from_ascii('/')); /* 47 */
	CuAssertTrue(tc, 0xB7 == ham_varicode_from_ascii('0')); /* 48 */
	CuAssertTrue(tc, 0xBD == ham_varicode_from_ascii('1')); /* 49 */
	CuAssertTrue(tc, 0xED == ham_varicode_from_ascii('2')); /* 50 */
	CuAssertTrue(tc, 0xFF == ham_varicode_from_ascii('3')); /* 51 */
	CuAssertTrue(tc, 0x177 == ham_varicode_from_ascii('4')); /* 52 */
	CuAssertTrue(tc, 0x15B == ham_varicode_from_ascii('5')); /* 53 */
	CuAssertTrue(tc, 0x16B == ham_varicode_from_ascii('6')); /* 54 */
	CuAssertTrue(tc, 0x1AD == ham_varicode_from_ascii('7')); /* 55 */
	CuAssertTrue(tc, 0x1AB == ham_varicode_from_ascii('8')); /* 56 */
	CuAssertTrue(tc, 0x1B7 == ham_varicode_from_ascii('9')); /* 57 */
	CuAssertTrue(tc, 0xF5 == ham_varicode_from_ascii(':')); /* 58 */
	CuAssertTrue(tc, 0x1BD == ham_varicode_from_ascii(';')); /* 59 */
	CuAssertTrue(tc, 0x1ED == ham_varicode_from_ascii('<')); /* 60 */
	CuAssertTrue(tc, 0x55 == ham_varicode_from_ascii('=')); /* 61 */
	CuAssertTrue(tc, 0x1D7 == ham_varicode_from_ascii('>')); /* 62 */
	CuAssertTrue(tc, 0x2AF == ham_varicode_from_ascii('?')); /* 63 */
	CuAssertTrue(tc, 0x2BD == ham_varicode_from_ascii('@')); /* 64 */
	CuAssertTrue(tc, 0x7D == ham_varicode_from_ascii('A')); /* 65 */
	CuAssertTrue(tc, 0xEB == ham_varicode_from_ascii('B')); /* 66 */
	CuAssertTrue(tc, 0xAD == ham_varicode_from_ascii('C')); /* 67 */
	CuAssertTrue(tc, 0xB5 == ham_varicode_from_ascii('D')); /* 68 */
	CuAssertTrue(tc, 0x77 == ham_varicode_from_ascii('E')); /* 69 */
	CuAssertTrue(tc, 0xDB == ham_varicode_from_ascii('F')); /* 70 */
	CuAssertTrue(tc, 0xFD == ham_varicode_from_ascii('G')); /* 71 */
	CuAssertTrue(tc, 0x155 == ham_varicode_from_ascii('H')); /* 72 */
	CuAssertTrue(tc, 0x7F == ham_varicode_from_ascii('I')); /* 73 */
	CuAssertTrue(tc, 0x1FD == ham_varicode_from_ascii('J')); /* 74 */
	CuAssertTrue(tc, 0x17D == ham_varicode_from_ascii('K')); /* 75 */
	CuAssertTrue(tc, 0xD7 == ham_varicode_from_ascii('L')); /* 76 */
	CuAssertTrue(tc, 0xBB == ham_varicode_from_ascii('M')); /* 77 */
	CuAssertTrue(tc, 0xDD == ham_varicode_from_ascii('N')); /* 78 */
	CuAssertTrue(tc, 0xAB == ham_varicode_from_ascii('O')); /* 79 */
	CuAssertTrue(tc, 0xD5 == ham_varicode_from_ascii('P')); /* 80 */
	CuAssertTrue(tc, 0x1DD == ham_varicode_from_ascii('Q')); /* 81 */
	CuAssertTrue(tc, 0xAF == ham_varicode_from_ascii('R')); /* 82 */
	CuAssertTrue(tc, 0x6F == ham_varicode_from_ascii('S')); /* 83 */
	CuAssertTrue(tc, 0x6D == ham_varicode_from_ascii('T')); /* 84 */
	CuAssertTrue(tc, 0x157 == ham_varicode_from_ascii('U')); /* 85 */
	CuAssertTrue(tc, 0x1B5 == ham_varicode_from_ascii('V')); /* 86 */
	CuAssertTrue(tc, 0x15D == ham_varicode_from_ascii('W')); /* 87 */
	CuAssertTrue(tc, 0x175 == ham_varicode_from_ascii('X')); /* 88 */
	CuAssertTrue(tc, 0x17B == ham_varicode_from_ascii('Y')); /* 89 */
	CuAssertTrue(tc, 0x2AD == ham_varicode_from_ascii('Z')); /* 90 */
	CuAssertTrue(tc, 0x1F7 == ham_varicode_from_ascii('[')); /* 91 */
	CuAssertTrue(tc, 0x1EF == ham_varicode_from_ascii('\\')); /* 92 */
	CuAssertTrue(tc, 0x1FB == ham_varicode_from_ascii(']')); /* 93 */
	CuAssertTrue(tc, 0x2BF == ham_varicode_from_ascii('^')); /* 94 */
	CuAssertTrue(tc, 0x16D == ham_varicode_from_ascii('_')); /* 95 */
	CuAssertTrue(tc, 0x2DF == ham_varicode_from_ascii('`')); /* 96 */
	CuAssertTrue(tc, 0xB == ham_varicode_from_ascii('a')); /* 97 */
	CuAssertTrue(tc, 0x5F == ham_varicode_from_ascii('b')); /* 98 */
	CuAssertTrue(tc, 0x2F == ham_varicode_from_ascii('c')); /* 99 */
	CuAssertTrue(tc, 0x2D == ham_varicode_from_ascii('d')); /* 100 */
	CuAssertTrue(tc, 0x3 == ham_varicode_from_ascii('e')); /* 101 */
	CuAssertTrue(tc, 0x3D == ham_varicode_from_ascii('f')); /* 102 */
	CuAssertTrue(tc, 0x5B == ham_varicode_from_ascii('g')); /* 103 */
	CuAssertTrue(tc, 0x2B == ham_varicode_from_ascii('h')); /* 104 */
	CuAssertTrue(tc, 0xD == ham_varicode_from_ascii('i')); /* 105 */
	CuAssertTrue(tc, 0x1EB == ham_varicode_from_ascii('j')); /* 106 */
	CuAssertTrue(tc, 0xBF == ham_varicode_from_ascii('k')); /* 107 */
	CuAssertTrue(tc, 0x1B == ham_varicode_from_ascii('l')); /* 108 */
	CuAssertTrue(tc, 0x3B == ham_varicode_from_ascii('m')); /* 109 */
	CuAssertTrue(tc, 0xF == ham_varicode_from_ascii('n')); /* 110 */
	CuAssertTrue(tc, 0x7 == ham_varicode_from_ascii('o')); /* 111 */
	CuAssertTrue(tc, 0x3F == ham_varicode_from_ascii('p')); /* 112 */
	CuAssertTrue(tc, 0x1BF == ham_varicode_from_ascii('q')); /* 113 */
	CuAssertTrue(tc, 0x15 == ham_varicode_from_ascii('r')); /* 114 */
	CuAssertTrue(tc, 0x17 == ham_varicode_from_ascii('s')); /* 115 */
	CuAssertTrue(tc, 0x5 == ham_varicode_from_ascii('t')); /* 116 */
	CuAssertTrue(tc, 0x37 == ham_varicode_from_ascii('u')); /* 117 */
	CuAssertTrue(tc, 0x7B == ham_varicode_from_ascii('v')); /* 118 */
	CuAssertTrue(tc, 0x6B == ham_varicode_from_ascii('w')); /* 119 */
	CuAssertTrue(tc, 0xDF == ham_varicode_from_ascii('x')); /* 120 */
	CuAssertTrue(tc, 0x5D == ham_varicode_from_ascii('y')); /* 121 */
	CuAssertTrue(tc, 0x1D5 == ham_varicode_from_ascii('z')); /* 122 */
	CuAssertTrue(tc, 0x2B7 == ham_varicode_from_ascii('{')); /* 123 */
	CuAssertTrue(tc, 0x1BB == ham_varicode_from_ascii('|')); /* 124 */
	CuAssertTrue(tc, 0x2B5 == ham_varicode_from_ascii('}')); /* 125 */
	CuAssertTrue(tc, 0x2D7 == ham_varicode_from_ascii('~')); /* 126 */
	CuAssertTrue(tc, 0x3B5 == ham_varicode_from_ascii(127)); /* 127 Delete*/

}

void Testham_varicode_to_ascii(CuTest* tc)
{

	CuAssertTrue(tc, ham_varicode_to_ascii(0x2AB) == 0); /* 0-31 Control chars */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2DB) == 1);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2ED) == 2);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x377) == 3);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2EB) == 4);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x35F) == 5);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2EF) == 6);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2FD) == 7);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2FF) == 8);
	CuAssertTrue(tc, ham_varicode_to_ascii(0xEF) == 9);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1D) == 10);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x36F) == 11);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2DD) == 12);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1F) == 13);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x375) == 14);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3AB) == 15);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2F7) == 16);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2F5) == 17);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3AD) == 18);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3AF) == 19);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x35B) == 20);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x36B) == 21);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x36D) == 22);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x357) == 23);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x37B) == 24);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x37D) == 25);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3B7) == 26);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x355) == 27);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x35D) == 28);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3BB) == 29);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2FB) == 30);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x37F) == 31);
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1) == ' '); /* 32 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1FF) == '!'); /* 33 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x15F) == '"'); /* 34 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1F5) == '#'); /* 35 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1DB) == '$'); /* 36 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2D5) == '%'); /* 37 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2BB) == '&'); /* 38 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x17F) == '\''); /* 39 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xFB) == '('); /* 40 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xF7) == ')'); /* 41 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x16F) == '*'); /* 42 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1DF) == '+'); /* 43 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x75) == ','); /* 44 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x35) == '-'); /* 45 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x57) == '.'); /* 46 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1AF) == '/'); /* 47 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xB7) == '0'); /* 48 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xBD) == '1'); /* 49 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xED) == '2'); /* 50 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xFF) == '3'); /* 51 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x177) == '4'); /* 52 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x15B) == '5'); /* 53 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x16B) == '6'); /* 54 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1AD) == '7'); /* 55 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1AB) == '8'); /* 56 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1B7) == '9'); /* 57 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xF5) == ':'); /* 58 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1BD) == ';'); /* 59 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1ED) == '<'); /* 60 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x55) == '='); /* 61 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1D7) == '>'); /* 62 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2AF) == '?'); /* 63 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2BD) == '@'); /* 64 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x7D) == 'A'); /* 65 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xEB) == 'B'); /* 66 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xAD) == 'C'); /* 67 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xB5) == 'D'); /* 68 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x77) == 'E'); /* 69 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xDB) == 'F'); /* 70 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xFD) == 'G'); /* 71 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x155) == 'H'); /* 72 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x7F) == 'I'); /* 73 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1FD) == 'J'); /* 74 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x17D) == 'K'); /* 75 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xD7) == 'L'); /* 76 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xBB) == 'M'); /* 77 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xDD) == 'N'); /* 78 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xAB) == 'O'); /* 79 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xD5) == 'P'); /* 80 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1DD) == 'Q'); /* 81 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xAF) == 'R'); /* 82 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x6F) == 'S'); /* 83 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x6D) == 'T'); /* 84 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x157) == 'U'); /* 85 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1B5) == 'V'); /* 86 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x15D) == 'W'); /* 87 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x175) == 'X'); /* 88 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x17B) == 'Y'); /* 89 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2AD) == 'Z'); /* 90 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1F7) == '['); /* 91 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1EF) == '\\'); /* 92 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1FB) == ']'); /* 93 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2BF) == '^'); /* 94 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x16D) == '_'); /* 95 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2DF) == '`'); /* 96 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xB) == 'a'); /* 97 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x5F) == 'b'); /* 98 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2F) == 'c'); /* 99 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2D) == 'd'); /* 100 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3) == 'e'); /* 101 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3D) == 'f'); /* 102 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x5B) == 'g'); /* 103 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2B) == 'h'); /* 104 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xD) == 'i'); /* 105 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1EB) == 'j'); /* 106 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xBF) == 'k'); /* 107 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1B) == 'l'); /* 108 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3B) == 'm'); /* 109 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xF) == 'n'); /* 110 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x7) == 'o'); /* 111 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3F) == 'p'); /* 112 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1BF) =='q'); /* 113 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x15) == 'r'); /* 114 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x17) == 's'); /* 115 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x5) == 't'); /* 116 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x37) == 'u'); /* 117 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x7B) == 'v'); /* 118 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x6B) == 'w'); /* 119 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0xDF) == 'x'); /* 120 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x5D) == 'y'); /* 121 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1D5) == 'z'); /* 122 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2B7) == '{'); /* 123 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x1BB) == '|'); /* 124 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2B5) == '}'); /* 125 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x2D7) == '~'); /* 126 */
	CuAssertTrue(tc, ham_varicode_to_ascii(0x3B5) == 127); /* 127 Delete*/

}
