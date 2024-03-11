#ifndef BITBOARD_CONSTANTS_H
#define BITBOARD_CONSTANTS_H

#include <stdint.h>


const int white = 0;
const int black = 1;

enum Square {
  a1, b1, c1, d1, e1, f1, g1, h1,
  a2, b2, c2, d2, e2, f2, g2, h2,
  a3, b3, c3, d3, e3, f3, g3, h3,
  a4, b4, c4, d4, e4, f4, g4, h4,
  a5, b5, c5, d5, e5, f5, g5, h5,
  a6, b6, c6, d6, e6, f6, g6, h6,
  a7, b7, c7, d7, e7, f7, g7, h7,
  a8, b8, c8, d8, e8, f8, g8, h8
};


const uint64_t not_A_file = 0b1111111011111110111111101111111011111110111111101111111011111110;
const uint64_t not_B_file = 0b1111110111111101111111011111110111111101111111011111110111111101;
const uint64_t not_C_file = 0b1111101111111011111110111111101111111011111110111111101111111011;
const uint64_t not_D_file = 0b1111011111110111111101111111011111110111111101111111011111110111;
const uint64_t not_E_file = 0b1110111111101111111011111110111111101111111011111110111111101111;
const uint64_t not_F_file = 0b1101111111011111110111111101111111011111110111111101111111011111;
const uint64_t not_G_file = 0b1011111110111111101111111011111110111111101111111011111110111111;
const uint64_t not_H_file = 0b0111111101111111011111110111111101111111011111110111111101111111;

const uint64_t not_AB_file = not_A_file & not_B_file;
const uint64_t not_GH_file = not_G_file & not_H_file;


#endif 
