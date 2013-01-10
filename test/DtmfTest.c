/*  
 * Copyright 2013 Daniel Hjort. All rights reserved.
 * Author: Daniel Hjort
 */

#include "dtmf.h"
#include "CuTest.h"

void TestAsciiToDtmf(CuTest* tc)
{
	DtmfTone tone;

	tone = ham_dtmf_from_ascii('1');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_0);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_0);

	tone = ham_dtmf_from_ascii('2');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_0);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_1);

	tone = ham_dtmf_from_ascii('3');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_0);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_2);

	tone = ham_dtmf_from_ascii('A');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_0);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_3);

	tone = ham_dtmf_from_ascii('4');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_1);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_0);

	tone = ham_dtmf_from_ascii('5');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_1);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_1);

	tone = ham_dtmf_from_ascii('6');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_1);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_2);

	tone = ham_dtmf_from_ascii('B');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_1);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_3);

	tone = ham_dtmf_from_ascii('7');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_2);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_0);

	tone = ham_dtmf_from_ascii('8');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_2);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_1);

	tone = ham_dtmf_from_ascii('9');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_2);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_2);

	tone = ham_dtmf_from_ascii('C');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_2);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_3);

	tone = ham_dtmf_from_ascii('*');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_3);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_0);

	tone = ham_dtmf_from_ascii('0');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_3);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_1);

	tone = ham_dtmf_from_ascii('#');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_3);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_2);

	tone = ham_dtmf_from_ascii('D');
	CuAssertTrue(tc, tone.low_freq == LOW_FREQ_3);
	CuAssertTrue(tc, tone.high_freq == HIGH_FREQ_3);
}

void TestDtmfToAscii(CuTest* tc)
{
	DtmfTone tone;

	tone.low_freq = LOW_FREQ_0;
	tone.high_freq = HIGH_FREQ_3;
	CuAssertTrue(tc, 'A' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_1;
	tone.high_freq = HIGH_FREQ_3;
	CuAssertTrue(tc, 'B' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_2;
	tone.high_freq = HIGH_FREQ_3;
	CuAssertTrue(tc, 'C' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_3;
	tone.high_freq = HIGH_FREQ_3;
	CuAssertTrue(tc, 'D' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_0;
	tone.high_freq = HIGH_FREQ_2;
	CuAssertTrue(tc, '3' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_1;
	tone.high_freq = HIGH_FREQ_2;
	CuAssertTrue(tc, '6' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_2;
	tone.high_freq = HIGH_FREQ_2;
	CuAssertTrue(tc, '9' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_3;
	tone.high_freq = HIGH_FREQ_2;
	CuAssertTrue(tc, '#' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_0;
	tone.high_freq = HIGH_FREQ_1;
	CuAssertTrue(tc, '2' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_1;
	tone.high_freq = HIGH_FREQ_1;
	CuAssertTrue(tc, '5' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_2;
	tone.high_freq = HIGH_FREQ_1;
	CuAssertTrue(tc, '8' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_3;
	tone.high_freq = HIGH_FREQ_1;
	CuAssertTrue(tc, '0' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_0;
	tone.high_freq = HIGH_FREQ_0;
	CuAssertTrue(tc, '1' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_1;
	tone.high_freq = HIGH_FREQ_0;
	CuAssertTrue(tc, '4' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_2;
	tone.high_freq = HIGH_FREQ_0;
	CuAssertTrue(tc, '7' == ham_dtmf_to_ascii(tone));

	tone.low_freq = LOW_FREQ_3;
	tone.high_freq = HIGH_FREQ_0;
	CuAssertTrue(tc, '*' == ham_dtmf_to_ascii(tone));
}
