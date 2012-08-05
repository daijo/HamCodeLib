/*  
 * Copyright 2012 Daniel Hjort. All rights reserved.
 * Author: Daniel Hjort
 */

#include "varicode.h"
#include "CuTest.h"

void TestCharToVaricode(CuTest* tc)
{

	CuAssertTrue(tc, 0x2AB == varicodeFromChar(0));
	CuAssertTrue(tc, 0x2DB == varicodeFromChar(1));
	
	CuAssertTrue(tc, 0x1 == varicodeFromChar(' '));

}
