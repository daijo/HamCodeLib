Ham Radio Codes Library
=======================

A C library for encoding/decoding some common codes used in amateur radio communications.

Features
--------

* Varicode to/from ASCII
* Morse code to/from ASCII
* Morse timing calculations

Backlog
-------

* Morse Procodes
* ITA2
* DTMF

Dependencies
------------

* C compiler
* Common Lisp, clisp and AWK (for static data structure code generation, result already checked in)

Build
-----

make

Test
----

make test

Morse Code
----------

Translating between the ASCII character set and Morse code.

> Morse code is a method of transmitting text information as a series of on-off tones, lights, or clicks that can be directly understood by a skilled listener or observer without special equipment. - Wikipedia

Varicode
--------

Translating between the ASCII character set and varicode.

> Varicode is a Huffman code for use in PSK31. It supports all ASCII characters, but the characters used most frequently have shorter codes. The space between characters is indicated by a 00 sequence, a variation of Fibonacci coding. Originally created for speeding up real-time keyboard-to-keyboard exchanges over low bandwidth links, it is a very useful format to shrink text files. Varicode is freely available. - Wikipedia

Reference
---------

* <https://en.wikipedia.org/wiki/Varicode>
* <http://www.arrl.org/psk31-spec>
* <https://en.wikipedia.org/wiki/ASCII>
* <https://en.wikipedia.org/wiki/Morse_code>
* <https://en.wikipedia.org/wiki/Prosigns_for_Morse_code>
* <https://en.wikipedia.org/wiki/Baudot_code>
