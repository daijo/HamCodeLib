#!/bin/bash
# Generate rows for LISP list
awk '{printf "\x27(\"%s\" \"%s\")\n", $1, $2}
' morsecodes.txt
