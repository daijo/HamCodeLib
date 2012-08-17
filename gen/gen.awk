#!/bin/bash
# Generate rows for LISP list
awk '
function char_in_string(string, i)
{
	return substr(string, i, 1)
}
function bin2dec(bin)
{
	dec = 0
	val = 1
	last_index = length(bin)
	for (i = last_index; i > 0; i--) {
		c = char_in_string(bin, i)
		if (c == '1')
			dec = dec + val
		val = 2 * val
#printf "i:%d c:%d dec:%d ", i, c, dec
	}
	return dec
}
{code=bin2dec($1) ; printf "\x27(#x%x %s \"%s\")\n", code, $3, $5}
' varicodes.txt
