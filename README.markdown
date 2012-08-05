Varicode Library
================

A C library for translating between the varicode character set and varicode.

> Varicode is a Huffman code for use in PSK31. It supports all ASCII characters, but the characters used most frequently have shorter codes. The space between characters is indicated by a 00 sequence, a variation of Fibonacci coding. Originally created for speeding up real-time keyboard-to-keyboard exchanges over low bandwidth links, it is a very useful format to shrink text files. Varicode is freely available. - Wikipedia

Build
-----

make

Test
----

make test

Reference
---------

* <https://en.wikipedia.org/wiki/Varicode>
* <http://www.arrl.org/psk31-spec>
* <https://en.wikipedia.org/wiki/Control_character>
* <https://en.wikipedia.org/wiki/ASCII>
