#ifndef UTILS_H
#define UTILS_H

#include <stdint.h>

void printBitboard(uint64_t bitboard);
void setBit(uint64_t *bitboard, int squareID, int value);

#endif