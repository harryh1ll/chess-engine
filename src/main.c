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

  for (int rank = 7; rank >= 0; --rank)
  {
    for (int file = 0; file < 8; ++file)
    {
      int square = (rank * 8) + file;
      // printf(" %d ", square);
      uint64_t thirdBit = (bitboard >> square) & 1;
      printf(" %llu ", thirdBit);
    }

    printf("\n");
  }
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


int main(int argc, char const *argv[])
{
  

  // uint64_t white_pawns   = 0b0000000000000000000000000000000000000000000000001111111100000000;
  // uint64_t white_knights = 0b0000000000000000000000000000000000000000000000000000000001000010;
  // uint64_t white_bishops = 0b0000000000000000000000000000000000000000000000000000000000100100;
  // uint64_t white_rooks   = 0b0000000000000000000000000000000000000000000000000000000010000001;
  // uint64_t white_queens  = 0b0000000000000000000000000000000000000000000000000000000000001000;
  // uint64_t white_king    = 0b0000000000000000000000000000000000000000000000000000000000010000;

  // uint64_t black_pawns   = 0b0000000011111111000000000000000000000000000000000000000000000000;
  // uint64_t black_knights = 0b0100001000000000000000000000000000000000000000000000000000000000;
  // uint64_t black_bishops = 0b0010010000000000000000000000000000000000000000000000000000000000;
  // uint64_t black_rooks   = 0b1000000100000000000000000000000000000000000000000000000000000000;
  // uint64_t black_queens  = 0b0000100000000000000000000000000000000000000000000000000000000000;
  // uint64_t black_king    = 0b0001000000000000000000000000000000000000000000000000000000000000;



  // uint64_t all_white_pieces = white_pawns | white_knights | white_bishops | \
  //                             white_rooks | white_queens  | white_king;

  // uint64_t all_black_pieces = black_pawns | black_knights | black_bishops | \
  //                             black_rooks | black_queens  | black_king;

  // uint64_t all_pieces = all_white_pieces | all_black_pieces;


  enum Square var = c4;
  uint64_t all_pieces = 0b0;
  setBit(&all_pieces, var, 1);


  printBitboard(all_pieces);

  printf("\n");


  printBitboard(all_pieces << 7);



  return 0;
}



