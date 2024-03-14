#include <stdio.h>
#include "utils.h"


void printBitboard(uint64_t bitboard){

  for (int rank = 7; rank >= 0; --rank) {
    printf("%d  ", rank+1);
    for (int file = 0; file < 8; ++file) {
      int square = (rank * 8) + file;
      // printf(" %d ", square);
      uint64_t thirdBit = (bitboard >> square) & 1;
      printf(" %llu ", thirdBit);
    }

    printf("\n");
  }

  printf("\n");
  printf("    a  b  c  d  e  f  g  h \n");
}


void setBit(uint64_t *bitboard, int squareID, int value){

  uint64_t shifter = 0b1;

  if (value == 1) {
      *bitboard |= (shifter << squareID);
  } else if (value == 0) {
      *bitboard &= ~(shifter << squareID);
    }

}