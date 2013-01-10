/*
* Copyright 2013 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#include "dtmf.h"

LowFreq low_freqs[] = {LOW_FREQ_0, LOW_FREQ_1, LOW_FREQ_2, LOW_FREQ_3};
HighFreq high_freqs[] = {HIGH_FREQ_0, HIGH_FREQ_1, HIGH_FREQ_2, HIGH_FREQ_3};

DtmfTone ham_dtmf_from_ascii(char character)
{
	DtmfTone result;
	
	switch (character) {

	case '0':
		result.low_freq = low_freqs[3];
		result.high_freq = high_freqs[1];
		break;

	case '1':
		result.low_freq = low_freqs[0];
		result.high_freq = high_freqs[0];
		break;

	case '2':
		result.low_freq = low_freqs[0];
		result.high_freq = high_freqs[1];
		break;

	case '3':
		result.low_freq = low_freqs[0];
		result.high_freq = high_freqs[2];
		break;

	case '4':
		result.low_freq = low_freqs[1];
		result.high_freq = high_freqs[0];
		break;

	case '5':
		result.low_freq = low_freqs[1];
		result.high_freq = high_freqs[1];
		break;

	case '6':
		result.low_freq = low_freqs[1];
		result.high_freq = high_freqs[2];
		break;

	case '7':
		result.low_freq = low_freqs[2];
		result.high_freq = high_freqs[0];
		break;

	case '8':
		result.low_freq = low_freqs[2];
		result.high_freq = high_freqs[1];
		break;

	case '9':
		result.low_freq = low_freqs[2];
		result.high_freq = high_freqs[2];
		break;

	case '*':
		result.low_freq = low_freqs[3];
		result.high_freq = high_freqs[0];
		break;

	case '#':
		result.low_freq = low_freqs[3];
		result.high_freq = high_freqs[2];
		break;

	case 'A':
		result.low_freq = low_freqs[0];
		result.high_freq = high_freqs[3];
		break;

	case 'B':
		result.low_freq = low_freqs[1];
		result.high_freq = high_freqs[3];
		break;

	case 'C':
		result.low_freq = low_freqs[2];
		result.high_freq = high_freqs[3];
		break;

	case 'D':
		result.low_freq = low_freqs[3];
		result.high_freq = high_freqs[3];
		break;

	default:
		break;
	}

	return result;
}

char ham_dtmf_to_ascii(DtmfTone tone)
{
	char result;

	switch (tone.low_freq) {

	case LOW_FREQ_0:

		switch (tone.high_freq) {

		case HIGH_FREQ_0:
			result = '1';
			break;

		case HIGH_FREQ_1:
			result = '2';
			break;

		case HIGH_FREQ_2:
			result = '3';
			break;

		case HIGH_FREQ_3:
			result = 'A';
			break;
		}

		break;

	case LOW_FREQ_1:

		switch (tone.high_freq) {

		case HIGH_FREQ_0:
			result = '4';
			break;

		case HIGH_FREQ_1:
			result = '5';
			break;

		case HIGH_FREQ_2:
			result = '6';
			break;

		case HIGH_FREQ_3:
			result = 'B';
			break;
		}

		break;

	case LOW_FREQ_2:

		switch (tone.high_freq) {

		case HIGH_FREQ_0:
			result = '7';
			break;

		case HIGH_FREQ_1:
			result = '8';
			break;

		case HIGH_FREQ_2:
			result = '9';
			break;

		case HIGH_FREQ_3:
			result = 'C';
			break;
		}

		break;

	case LOW_FREQ_3:

		switch (tone.high_freq) {

		case HIGH_FREQ_0:
			result = '*';
			break;

		case HIGH_FREQ_1:
			result = '0';
			break;

		case HIGH_FREQ_2:
			result = '#';
			break;

		case HIGH_FREQ_3:
			result = 'D';
			break;
		}

		break;

	}

	return result;
}
