#include "../include/driver_framebuffer.h"
const uint8_t org_0116pt7bBitmaps[] = {
  0x00, 0xFF, 0xFC, 0x3C, 0xC7, 0x8C, 0x31, 0x86, 0x33, 0xFF, 0xFF, 0xF3,
  0x18, 0x63, 0x0C, 0x67, 0xFF, 0xFF, 0xE6, 0x30, 0xC6, 0x00, 0xFF, 0xFF,
  0xFC, 0xC3, 0x30, 0xCC, 0x3F, 0xFF, 0xFC, 0x33, 0x0C, 0xFF, 0xFF, 0xFC,
  0xC0, 0xF0, 0x30, 0x30, 0x0C, 0x0C, 0x03, 0x03, 0x00, 0xC0, 0xC0, 0xF0,
  0x3C, 0x0C, 0xFF, 0x9F, 0xF3, 0x06, 0x60, 0xCC, 0x19, 0xFF, 0xFF, 0xFE,
  0x0C, 0xC1, 0x9F, 0xCF, 0xF9, 0x80, 0xF0, 0x33, 0xCC, 0xCC, 0xCC, 0xC3,
  0x30, 0xCC, 0x33, 0x33, 0x33, 0x3C, 0xC0, 0xC7, 0x8F, 0x19, 0xC3, 0x98,
  0xF1, 0x80, 0x30, 0xC3, 0x3F, 0xFC, 0xC3, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0xF0, 0x00, 0xC0, 0x30, 0x3C, 0x0C, 0x03, 0x03, 0x00, 0xC0, 0xC0,
  0x30, 0x30, 0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0xE0, 0x3C, 0x07, 0x80,
  0xF0, 0x1E, 0x03, 0xC0, 0x7F, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFC, 0xFF,
  0xFF, 0xFC, 0x01, 0x80, 0x30, 0x07, 0xFF, 0xFF, 0xFE, 0x00, 0xC0, 0x1F,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFC, 0x01, 0x80, 0x30, 0x07, 0xFF, 0xFF,
  0xF8, 0x03, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0xC0, 0x78, 0x0F, 0x01, 0xE0,
  0x3C, 0x07, 0xFF, 0xFF, 0xF8, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x80, 0xFF,
  0xFF, 0xFF, 0x00, 0x60, 0x0C, 0x01, 0xFF, 0xFF, 0xF8, 0x03, 0x00, 0x7F,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x0C, 0x01, 0xFF, 0xFF,
  0xFE, 0x03, 0xC0, 0x7F, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFC, 0x01, 0x80,
  0x30, 0x06, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x80, 0xFF,
  0xFF, 0xFF, 0x01, 0xE0, 0x3C, 0x07, 0xFF, 0xFF, 0xFE, 0x03, 0xC0, 0x7F,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x01, 0xE0, 0x3C, 0x07, 0xFF, 0xFF,
  0xF8, 0x03, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0xF0, 0x03, 0xC0, 0xF0, 0x3F,
  0xC0, 0x0C, 0x33, 0x0C, 0xC3, 0x03, 0x0C, 0x0C, 0x30, 0xC0, 0xFF, 0xFF,
  0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFE, 0xC1, 0x80, 0xE1, 0xC3, 0x80, 0xC1,
  0x9C, 0x39, 0x83, 0x00, 0xFF, 0xFF, 0xFC, 0x01, 0x80, 0x30, 0x06, 0x1F,
  0xC3, 0xF8, 0x00, 0x00, 0x01, 0x80, 0x30, 0x00, 0xFF, 0xFF, 0xFC, 0xCF,
  0x33, 0xCC, 0xF3, 0xFC, 0xFF, 0x00, 0xC0, 0x3F, 0xFF, 0xFC, 0xFF, 0xFF,
  0xFF, 0x01, 0xE0, 0x3C, 0x07, 0xFF, 0xFF, 0xFE, 0x03, 0xC0, 0x78, 0x0F,
  0x01, 0x80, 0xFF, 0x9F, 0xF3, 0x01, 0xE0, 0x3C, 0x09, 0xFF, 0x3F, 0xE6,
  0x03, 0xC0, 0x7F, 0xF3, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x0C,
  0x01, 0x80, 0x30, 0x06, 0x00, 0xC0, 0x1F, 0xFF, 0xFF, 0x80, 0xFF, 0x9F,
  0xF3, 0x01, 0xE0, 0x3C, 0x07, 0x80, 0xF0, 0x1E, 0x03, 0xC0, 0x7F, 0xF3,
  0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x0C, 0x01, 0xFF, 0xFF, 0xFE,
  0x00, 0xC0, 0x1F, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x0C,
  0x01, 0xFF, 0xFF, 0xFE, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0x00, 0x60, 0x0C, 0x01, 0x9F, 0xF3, 0xFE, 0x03, 0xC0, 0x7F, 0xFF,
  0xFF, 0x80, 0xC0, 0x78, 0x0F, 0x01, 0xE0, 0x3C, 0x07, 0xFF, 0xFF, 0xFE,
  0x03, 0xC0, 0x78, 0x0F, 0x01, 0x80, 0xFF, 0xFF, 0xFC, 0x30, 0x06, 0x00,
  0xC0, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x1F, 0xFF, 0xFF, 0x80, 0x3F, 0xE7,
  0xFC, 0x06, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x66, 0x0C, 0xC1, 0x9F, 0xFF,
  0xFF, 0x80, 0xC0, 0x78, 0x0F, 0x3E, 0x67, 0xCF, 0x01, 0xE0, 0x33, 0xE6,
  0x7C, 0xC0, 0x78, 0x0F, 0x01, 0x80, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0C,
  0x01, 0x80, 0x30, 0x06, 0x00, 0xC0, 0x1F, 0xFF, 0xFF, 0x80, 0xFF, 0xFF,
  0xFC, 0xCF, 0x33, 0xCC, 0xF3, 0x3C, 0xCF, 0x33, 0xCC, 0xF3, 0x3C, 0xCC,
  0xFF, 0xFF, 0xFF, 0x01, 0xE0, 0x3C, 0x07, 0x80, 0xF0, 0x1E, 0x03, 0xC0,
  0x78, 0x0F, 0x01, 0x80, 0xFF, 0xFF, 0xFF, 0x01, 0xE0, 0x3C, 0x07, 0x80,
  0xF0, 0x1E, 0x03, 0xC0, 0x7F, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x01,
  0xE0, 0x3C, 0x07, 0xFF, 0xFF, 0xFE, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0x01, 0xE0, 0x3C, 0x07, 0x80, 0xF0, 0x1E, 0x0F, 0xC1,
  0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x01, 0xE0, 0x3C, 0x07, 0xFF,
  0xFF, 0xFE, 0x0C, 0xC1, 0x98, 0x33, 0x06, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
  0x60, 0x0C, 0x01, 0xFF, 0xFF, 0xF8, 0x03, 0x00, 0x7F, 0xFF, 0xFF, 0x80,
  0xFF, 0xFF, 0xFC, 0x30, 0x06, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0C,
  0x01, 0x80, 0x30, 0x00, 0xC0, 0x78, 0x0F, 0x01, 0xE0, 0x3C, 0x07, 0x80,
  0xF0, 0x1E, 0x03, 0xC0, 0x7F, 0xFF, 0xFF, 0x80, 0xC0, 0xF0, 0x3C, 0x0F,
  0x03, 0xC0, 0xF0, 0x3C, 0x0C, 0xCC, 0x33, 0x03, 0x00, 0xC0, 0xCC, 0xF3,
  0x3C, 0xCF, 0x33, 0xCC, 0xF3, 0x3C, 0xCF, 0x33, 0xCC, 0xFF, 0xFF, 0xFC,
  0xC0, 0xF0, 0x33, 0x30, 0xCC, 0x33, 0x03, 0x00, 0xC0, 0xCC, 0x33, 0x30,
  0x3C, 0x0C, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xCC, 0xC3, 0x30, 0x30,
  0x0C, 0x03, 0x00, 0xC0, 0xFF, 0xFF, 0xFC, 0x01, 0x80, 0x30, 0x07, 0xFF,
  0xFF, 0xFE, 0x00, 0xC0, 0x1F, 0xFF, 0xFF, 0x80, 0xFF, 0xCC, 0xCC, 0xCC,
  0xCF, 0xF0, 0xC0, 0x30, 0x03, 0x00, 0xC0, 0x0C, 0x03, 0x00, 0x30, 0x0C,
  0x00, 0xC0, 0x30, 0x0C, 0xFF, 0x33, 0x33, 0x33, 0x3F, 0xF0, 0x30, 0xCC,
  0xF3, 0xFF, 0xFF, 0xFC, 0xF0, 0xFF, 0xFF, 0xC0, 0x60, 0x30, 0x1F, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0xC0, 0x60, 0x3F, 0xFF, 0xFC, 0x1E, 0x0F, 0x07,
  0x83, 0xC1, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xF0, 0x18, 0x0C, 0x06, 0x03,
  0x01, 0xFF, 0xFF, 0x80, 0x01, 0x80, 0xFF, 0xFF, 0xFC, 0x1E, 0x0F, 0x07,
  0x83, 0xC1, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x06, 0x03,
  0x01, 0xFF, 0xFF, 0x80, 0x3C, 0xF3, 0x0C, 0x33, 0xFF, 0xCC, 0x30, 0xC3,
  0x00, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF, 0xFF, 0x80,
  0xC0, 0x60, 0xC0, 0x60, 0x3F, 0xFF, 0xFC, 0x1E, 0x0F, 0x07, 0x83, 0xC1,
  0xE0, 0xF0, 0x60, 0xFF, 0xFF, 0xC0, 0x33, 0x33, 0x33, 0x33, 0x3F, 0xF0,
  0xC0, 0x60, 0x31, 0x98, 0xCC, 0x67, 0xFF, 0xFF, 0x83, 0xC1, 0xE0, 0xF0,
  0x60, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFC, 0xCF, 0x33, 0xC0, 0xF0, 0x3C,
  0x0F, 0x03, 0xC0, 0xC0, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07,
  0x83, 0xC1, 0x80, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF,
  0xFF, 0x80, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF, 0xFF,
  0xE0, 0x30, 0x00, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF,
  0xFF, 0x83, 0x01, 0x80, 0xFF, 0xFF, 0xF0, 0x18, 0x0C, 0x06, 0x03, 0x01,
  0x80, 0xC0, 0x00, 0x30, 0x18, 0x0F, 0xE7, 0xF0, 0x18, 0x0C, 0x07, 0xFF,
  0xFF, 0x80, 0x0C, 0x01, 0x83, 0xFF, 0xFF, 0xF0, 0xC0, 0x18, 0x03, 0x00,
  0x60, 0x0C, 0x01, 0x80, 0x30, 0x00, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E,
  0x0F, 0x07, 0xFF, 0xFF, 0x80, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F,
  0x06, 0x7F, 0x3F, 0x80, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF3, 0x3C,
  0xCF, 0xFF, 0xFF, 0xC0, 0xC1, 0xE0, 0xCF, 0x87, 0xC3, 0xE1, 0xF0, 0xF9,
  0x83, 0xC1, 0x80, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF,
  0xFF, 0x80, 0xC0, 0x60, 0x06, 0x03, 0x3F, 0x9F, 0xCC, 0x06, 0x03, 0x01,
  0xFF, 0xFF, 0x80, 0x0C, 0x33, 0x0C, 0x33, 0xCF, 0x0C, 0x30, 0x30, 0xC0,
  0xFF, 0xFF, 0xFC, 0xC3, 0x03, 0x0C, 0x30, 0xF3, 0xCC, 0x33, 0x0C, 0x00,
  0x00, 0x60, 0x0C, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x30, 0x00 };

const GFXglyph org_0116pt7bGlyphs[] = {
  {     0,   1,   1,  14,    0,    0 },   // 0x20 ' '
  {     1,   2,  11,   5,    1,  -10 },   // 0x21 '!'
  {     4,   7,   2,   9,    1,  -10 },   // 0x22 '"'
  {     6,  11,  11,  14,    1,  -10 },   // 0x23 '#'
  {    22,  10,  11,  14,    1,  -10 },   // 0x24 '$'
  {    36,  10,  11,  14,    1,  -10 },   // 0x25 '%'
  {    50,  11,  11,  14,    1,  -10 },   // 0x26 '&'
  {    66,   2,   2,   5,    1,  -10 },   // 0x27 '''
  {    67,   4,  11,   7,    1,  -10 },   // 0x28 '('
  {    73,   4,  11,   7,    1,  -10 },   // 0x29 ')'
  {    79,   7,   7,   9,    1,   -8 },   // 0x2A '*'
  {    86,   6,   7,   9,    1,   -8 },   // 0x2B '+'
  {    92,   2,   4,   5,    1,   -1 },   // 0x2C ','
  {    93,   9,   3,  11,    1,   -6 },   // 0x2D '-'
  {    97,   2,   2,   5,    1,   -1 },   // 0x2E '.'
  {    98,  10,  11,  14,    1,  -10 },   // 0x2F '/'
  {   112,  11,  11,  14,    1,  -10 },   // 0x30 '0'
  {   128,   2,  11,   5,    1,  -10 },   // 0x31 '1'
  {   131,  11,  11,  14,    1,  -10 },   // 0x32 '2'
  {   147,  11,  11,  14,    1,  -10 },   // 0x33 '3'
  {   163,  11,  11,  14,    1,  -10 },   // 0x34 '4'
  {   179,  11,  11,  14,    1,  -10 },   // 0x35 '5'
  {   195,  11,  11,  14,    1,  -10 },   // 0x36 '6'
  {   211,  11,  11,  14,    1,  -10 },   // 0x37 '7'
  {   227,  11,  11,  14,    1,  -10 },   // 0x38 '8'
  {   243,  11,  11,  14,    1,  -10 },   // 0x39 '9'
  {   259,   2,   9,   5,    1,   -8 },   // 0x3A ':'
  {   262,   2,   9,   5,    1,   -8 },   // 0x3B ';'
  {   265,   6,  11,   9,    1,  -10 },   // 0x3C '<'
  {   274,   9,   7,  11,    1,   -8 },   // 0x3D '='
  {   282,   7,  11,   9,    1,  -10 },   // 0x3E '>'
  {   292,  11,  11,  14,    1,  -10 },   // 0x3F '?'
  {   308,  10,  11,  14,    1,  -10 },   // 0x40 '@'
  {   322,  11,  11,  14,    1,  -10 },   // 0x41 'A'
  {   338,  11,  11,  14,    1,  -10 },   // 0x42 'B'
  {   354,  11,  11,  14,    1,  -10 },   // 0x43 'C'
  {   370,  11,  11,  14,    1,  -10 },   // 0x44 'D'
  {   386,  11,  11,  14,    1,  -10 },   // 0x45 'E'
  {   402,  11,  11,  14,    1,  -10 },   // 0x46 'F'
  {   418,  11,  11,  14,    1,  -10 },   // 0x47 'G'
  {   434,  11,  11,  14,    1,  -10 },   // 0x48 'H'
  {   450,  11,  11,  14,    1,  -10 },   // 0x49 'I'
  {   466,  11,  11,  14,    1,  -10 },   // 0x4A 'J'
  {   482,  11,  11,  14,    1,  -10 },   // 0x4B 'K'
  {   498,  11,  11,  14,    1,  -10 },   // 0x4C 'L'
  {   514,  10,  11,  14,    1,  -10 },   // 0x4D 'M'
  {   528,  11,  11,  14,    1,  -10 },   // 0x4E 'N'
  {   544,  11,  11,  14,    1,  -10 },   // 0x4F 'O'
  {   560,  11,  11,  14,    1,  -10 },   // 0x50 'P'
  {   576,  11,  11,  14,    1,  -10 },   // 0x51 'Q'
  {   592,  11,  11,  14,    1,  -10 },   // 0x52 'R'
  {   608,  11,  11,  14,    1,  -10 },   // 0x53 'S'
  {   624,  11,  11,  14,    1,  -10 },   // 0x54 'T'
  {   640,  11,  11,  14,    1,  -10 },   // 0x55 'U'
  {   656,  10,  11,  14,    1,  -10 },   // 0x56 'V'
  {   670,  10,  11,  14,    1,  -10 },   // 0x57 'W'
  {   684,  10,  11,  14,    1,  -10 },   // 0x58 'X'
  {   698,  10,  11,  14,    1,  -10 },   // 0x59 'Y'
  {   712,  11,  11,  14,    1,  -10 },   // 0x5A 'Z'
  {   728,   4,  11,   7,    1,  -10 },   // 0x5B '['
  {   734,  10,  11,  14,    1,  -10 },   // 0x5C '\'
  {   748,   4,  11,   7,    1,  -10 },   // 0x5D ']'
  {   754,   6,   4,   9,    1,  -10 },   // 0x5E '^'
  {   757,  11,   2,  14,    1,    1 },   // 0x5F '_'
  {   760,   2,   2,   5,    1,  -10 },   // 0x60 '`'
  {   761,   9,   9,  11,    1,   -8 },   // 0x61 'a'
  {   772,   9,  11,  11,    1,  -10 },   // 0x62 'b'
  {   785,   9,   9,  11,    1,   -8 },   // 0x63 'c'
  {   796,   9,  11,  11,    1,  -10 },   // 0x64 'd'
  {   809,   9,   9,  11,    1,   -8 },   // 0x65 'e'
  {   820,   6,  11,   9,    1,  -10 },   // 0x66 'f'
  {   829,   9,  11,  11,    1,   -8 },   // 0x67 'g'
  {   842,   9,  11,  11,    1,  -10 },   // 0x68 'h'
  {   855,   2,   9,   5,    1,   -8 },   // 0x69 'i'
  {   858,   4,  11,   7,    1,   -8 },   // 0x6A 'j'
  {   864,   9,  11,  11,    1,  -10 },   // 0x6B 'k'
  {   877,   2,  11,   5,    1,  -10 },   // 0x6C 'l'
  {   880,  10,   9,  14,    1,   -8 },   // 0x6D 'm'
  {   892,   9,   9,  11,    1,   -8 },   // 0x6E 'n'
  {   903,   9,   9,  11,    1,   -8 },   // 0x6F 'o'
  {   914,   9,  11,  11,    1,   -8 },   // 0x70 'p'
  {   927,   9,  11,  11,    1,   -8 },   // 0x71 'q'
  {   940,   9,   9,  11,    1,   -8 },   // 0x72 'r'
  {   951,   9,   9,  11,    1,   -8 },   // 0x73 's'
  {   962,  11,  11,  14,    1,  -10 },   // 0x74 't'
  {   978,   9,   9,  11,    1,   -8 },   // 0x75 'u'
  {   989,   9,   9,  11,    1,   -8 },   // 0x76 'v'
  {  1000,  10,   9,  14,    1,   -8 },   // 0x77 'w'
  {  1012,   9,   9,  11,    1,   -8 },   // 0x78 'x'
  {  1023,   9,  11,  11,    1,   -8 },   // 0x79 'y'
  {  1036,   9,   9,  11,    1,   -8 },   // 0x7A 'z'
  {  1047,   6,  11,   9,    1,  -10 },   // 0x7B '{'
  {  1056,   2,  11,   5,    1,  -10 },   // 0x7C '|'
  {  1059,   6,  11,   9,    1,  -10 },   // 0x7D '}'
  {  1068,  11,   7,  14,    1,   -8 } }; // 0x7E '~'

const GFXfont org_0116pt7b = {
  (uint8_t  *)org_0116pt7bBitmaps,
  (GFXglyph *)org_0116pt7bGlyphs,
  0x20, 0x7E, 16 };//B

// Approx. 1750 bytes
