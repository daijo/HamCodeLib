/*
* Copyright 2013 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

#ifndef __DTMF_H__
#define __DTMF_H__

#include <inttypes.h>

typedef enum {
	LOW_FREQ_0 = 697,
	LOW_FREQ_1 = 770,
	LOW_FREQ_2 = 852,
	LOW_FREQ_3 = 941
} LowFreq;

typedef enum {
	HIGH_FREQ_0 = 1209,
	HIGH_FREQ_1 = 1336,
	HIGH_FREQ_2 = 1477,
	HIGH_FREQ_3 = 1633
} HighFreq;

typedef struct {
	LowFreq low_freq;
	HighFreq high_freq;
} DtmfTone;

DtmfTone ham_dtmf_from_ascii(char character);

char ham_dtmf_to_ascii(DtmfTone tone);

#endif
