#ifndef BITBOARD_UTILS_H
#define BITBOARD_UTILS_H

#include <stdint.h>

void printBitboard(uint64_t bitboard);
void setBit(uint64_t *bitboard, int squareID, int value);

#endif