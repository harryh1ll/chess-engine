#include <stdio.h>
#include <stdint.h>



enum enumSquare {
  a1, b1, c1, d1, e1, f1, g1, h1,
  a2, b2, c2, d2, e2, f2, g2, h2,
  a3, b3, c3, d3, e3, f3, g3, h3,
  a4, b4, c4, d4, e4, f4, g4, h4,
  a5, b5, c5, d5, e5, f5, g5, h5,
  a6, b6, c6, d6, e6, f6, g6, h6,
  a7, b7, c7, d7, e7, f7, g7, h7,
  a8, b8, c8, d8, e8, f8, g8, h8
};


void printBitboard(uint64_t bitboard){

  for (int rank = 7; rank >= 0; rank--) {
    printf("%d  ", rank+1);
    for (int file = 0; file < 8; file++) {
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


void setBit(uint64_t *bitboard, int bit_loc, int value){
    if (value == 1) {
        // Update bitboard
        *bitboard |= (1 << bit_loc);
    } else if (value == 0) {
        // Update bitboard
        *bitboard &= ~(1 << bit_loc);
    }

}


void getPawnAttacks(int squareID, int colour){

  // inputs:
  // (int) square = square which contains a single pawn (0->63)
  // (int) colour = who's playing. White = 0, black = 1

  uint64_t pawn_board = 0b0;
  uint64_t attack_board = 0b0;

  // place a pawn on the board at the square
  setBit(&pawn_board, squareID, 1);


  if (colour == 0){
    attack_board |= (pawn_board << 7);
    attack_board |= (pawn_board << 9);
  } else if (colour == 1) {
    /* code */
  } else {
    printf("%s \n", "Something has gone horribly wrong");
  }

  printBitboard(attack_board);



}


// void buildPawnAttacks{}


int main(int argc, char const *argv[])
{

  // enum enumSquare var = c4;
  // uint64_t all_pieces = 0b0;
  // setBit(&all_pieces, var, 1);


  // printBitboard(all_pieces);

  // printf("\n");


  // printBitboard(all_pieces << 7);

  enum enumSquare var = a3;
  getPawnAttacks(var, 0);

  return 0;
}




