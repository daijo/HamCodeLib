#! /opt/local/bin/clisp -C
;; -*- Mode: Lisp -*-

;; Copyright 2012 Daniel Hjort. All rights reserved.
;; Author: Daniel Hjort

;; Codes
(defvar *codes*
  (list '(#x2AB 0 "NUL")
    '(#x2DB 1 "SOH")
    '(#x2ED 2 "STX")
    '(#x377 3 "ETX")
))


;; Generate C code

;; Ascii -> Varicode lookup array
(format t "/* Generated file */~&")
(format t "~&#include \"varicode.h\"~&")
(format t "~&#include \"varicode_data.h\"~&")
(format t "~&varicode_t codes[] = {")
(format t "~{0x~X ~^, ~}" (mapcar #'first *codes*))
(format t "};~&")

;; Varicode -> Ascii binary tree array
;; TBD

