#include <avr/pgmspace.h>
// Lookup table to convert ascii characters in to keyboard scan codes
// Format: most signifficant bit indicates if scan code should be sent with shift modifier
// remaining 7 bits are to be used as scan code number.

const unsigned char ascii_to_scan_code_table[] PROGMEM = {
  /* ASCII:   8 */ 42,      // Backspace
  /* ASCII:   9 */ 43,      // Tab
  /* ASCII:  10 */ 40,      // Enter
  /* ASCII:  27 */ 41,      // Escape
  /* ASCII:  32 */ 44,      // Space
  /* ASCII:  33 */ 30 | 0x80,  // ! (Shift + 1)
  /* ASCII:  34 */ 31 | 0x80,  // " (Shift + 2)
  /* ASCII:  35 */ 32,      // # (AltGr + 3 no PT)
  /* ASCII:  36 */ 33,      // $ (AltGr + 4 no PT)
  /* ASCII:  37 */ 34 | 0x80,  // % (Shift + 5)
  /* ASCII:  38 */ 35 | 0x80,  // & (Shift + 6)
  /* ASCII:  39 */ 45,      // ' (Apostrophe)
  /* ASCII:  40 */ 37 | 0x80,  // ( (Shift + 8)
  /* ASCII:  41 */ 38 | 0x80,  // ) (Shift + 9)
  /* ASCII:  42 */ 48 | 0x80,  // * (Shift + +)
  /* ASCII:  43 */ 48,      // + 
  /* ASCII:  44 */ 54,      // , 
  /* ASCII:  45 */ 56,      // -
  /* ASCII:  46 */ 55,      // .
  /* ASCII:  47 */ 164,     // /
  /* ASCII:  48 */ 39,      // 0
  /* ASCII:  49 */ 30,      // 1
  /* ASCII:  50 */ 31,      // 2
  /* ASCII:  51 */ 32,      // 3
  /* ASCII:  52 */ 33,      // 4
  /* ASCII:  53 */ 34,      // 5
  /* ASCII:  54 */ 35,      // 6
  /* ASCII:  55 */ 36,      // 7
  /* ASCII:  56 */ 37,      // 8
  /* ASCII:  57 */ 38,      // 9
  /* ASCII:  64 */ 31 | 0x80,  // @ (AltGr + 2)
  /* ASCII:  91 */ 26 | 0x80,  // [ (AltGr + 8 no PT)
  /* ASCII:  92 */ 53,      // \
  /* ASCII:  93 */ 27 | 0x80,  // ] (AltGr + 9 no PT)
  /* ASCII: 123 */ 47 | 0x80,  // { (AltGr + Shift + 8 no PT)
  /* ASCII: 124 */ 53 | 0x80,  // | (AltGr + < no PT)
  /* ASCII: 125 */ 48 | 0x80,  // } (AltGr + Shift + 9 no PT)
  /* ASCII: 126 */ 49 | 0x80,  // ~ (Shift + AltGr + 4)
  /* ASCII:  97 */ 4,       // a
  /* ASCII:  98 */ 5,       // b
  /* ASCII:  99 */ 6,       // c
  /* ASCII: 100 */ 7,       // d
  /* ASCII: 101 */ 8,       // e
  /* ASCII: 102 */ 9,       // f
  /* ASCII: 103 */ 10,      // g
  /* ASCII: 104 */ 11,      // h
  /* ASCII: 105 */ 12,      // i
  /* ASCII: 106 */ 13,      // j
  /* ASCII: 107 */ 14,      // k
  /* ASCII: 108 */ 15,      // l
  /* ASCII: 109 */ 16,      // m
  /* ASCII: 110 */ 17,      // n
  /* ASCII: 111 */ 18,      // o
  /* ASCII: 112 */ 19,      // p
  /* ASCII: 113 */ 20,      // q
  /* ASCII: 114 */ 21,      // r
  /* ASCII: 115 */ 22,      // s
  /* ASCII: 116 */ 23,      // t
  /* ASCII: 117 */ 24,      // u
  /* ASCII: 118 */ 25,      // v
  /* ASCII: 119 */ 26,      // w
  /* ASCII: 120 */ 27,      // x
  /* ASCII: 121 */ 28,      // y
  /* ASCII: 122 */ 29,      // z
  /* ASCII: 231 */ 51,      // ç (Portuguese key)
};
