Varicode Library
================

A C library for translating between the ASCII character set and varicode.

> Varicode is a Huffman code for use in PSK31. It supports all ASCII characters, but the characters used most frequently have shorter codes. The space between characters is indicated by a 00 sequence, a variation of Fibonacci coding. Originally created for speeding up real-time keyboard-to-keyboard exchanges over low bandwidth links, it is a very useful format to shrink text files. Varicode is freely available. - Wikipedia

Design
------

Goals:

* Static memory
* Optimized on space over speed
* A speed over space option. TBD.

Since the Ascii codes are a integer between 0 and 127 the can be used as indicies in an array with the Varicode values. Varicode need 10 bits, this library uses a 16 bit unsigned int per varicode. Look up is a O(1) operation in time.

In the reverse lookup we are face with a speed vs. space consideration. For optimal speed we search for the Varicodes in a binary tree and then check the resulting node for the corresponding Ascii code.

However since the restrictions on Varicodes to start and begin with 1 and never contain more than one consecutive 0, the tree wastes a lot af space. Since the varicode can be up to 10 bits long the depth of the binary tree is 9. This means it must contain at least 512 nodes. Only 128 of them contain a legal Varicode and hence a ASCII code.

An array implementation would waste 384 bytes (assuming we use an array of bytes which would be enough to store the ASCII codes).

Implemented as a tree with nodes that point to children (left/right; 0/1) some pruning could be done. All nodes that represent a code that end with 00 are the root nodes of a tree that can be pruned. But doing it as a tree with nodes that point to other nodes we use up memory for pointers. That is 2x2 bytes on a AVR MCU. So assuming we can prune all but the valid nodes we spend 512 bytes on the pointers alone. 

For optimum space we can just do a linear search for the Varicodes through the array used in ASCII to Varicode lookup. The expected and worstcase time for this is O(n).

The static data is generated via a script in case I decide to implement a faster but more space consuming binary tree Varicode to ASCII lookup later.

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

Reference
---------

* <https://en.wikipedia.org/wiki/Varicode>
* <http://www.arrl.org/psk31-spec>
* <https://en.wikipedia.org/wiki/ASCII>
