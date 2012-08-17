/*
* Copyright 2012 Daniel Hjort. All rights reserved.
* Author: Daniel Hjort
*/

/* An array with the varicodes in ASCII order. */
varicode_t codes[128];

/* 
 * Binary tree in an array.
 * Zeroes to left, ones to right.
 * For a node with index i:
 * Left child is at 2i + 1
 * Right child is at 2i + 2
 * Parent is at floor((i - 1) / 2)
 * Root is ASCII 'e', Varicode 0x3 (11).
 */
/*varicode_t *bintree[128];*/ 
