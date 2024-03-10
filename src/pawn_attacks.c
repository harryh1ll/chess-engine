#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "bitboard_utils.h"
#include "bitboard_constants.h"
#include "numc.h"


uint64_t getPawnAttacks(int squareID, int colour){

  // inputs:
  // (int) square = square which contains a single pawn (0->63)
  // (int) colour = who's playing. White = 0, black = 1

  // returns:
  // (uint64_t) attack_board = squares which the pawn on 
  // squareID can attack for a given colour

  // This is called by buildPawnAttackArrays which will build a
  // pre-computed array of all pawn attacks for all squares
  // and colours. This function is just generating the attacks
  // for a single square and colour.

  uint64_t pawn_board = 0;
  uint64_t attack_board = 0;

  // place a pawn on the board at the square
  setBit(&pawn_board, squareID, 1);

  if (colour == 0){
    attack_board |= ((pawn_board << 7) & not_H_file);
    attack_board |= ((pawn_board << 9) & not_A_file);
  } else if (colour == 1) {
    attack_board |= ((pawn_board >> 7) & not_A_file);
    attack_board |= ((pawn_board >> 9) & not_H_file);
  } else {
    printf("%s \n", "Something has gone horribly wrong");
  }

  return attack_board;
}


void buildPawnAttackArrays(){

  // inputs:

  // returns:

  // Builds the pawn attach array for each square and
  // each colour. This 2D array has entries for each 
  // square and each colour. The returned uint64_t for each
  // entry is a bitboard of the squares which are under 'attack'
  // from the pawn on this square. Here 'attack' means
  // the diagonal which the pawns attack, rather than a 
  // pawn push or promotion. Pre-computing this saves time
  // as you don't recompute at each turn.

  uint64_t* w_pawn_attack_array = u64Zeros(64);
  uint64_t* b_pawn_attack_array = u64Zeros(64);

  for (int square = 0; square < 64; ++square) {
    w_pawn_attack_array[square] = getPawnAttacks(square, 0);
    b_pawn_attack_array[square] = getPawnAttacks(square, 1);
  }

  for (int square = 0; square < 64; ++square) {
    printBitboard(b_pawn_attack_array[square]);
    printf("\n");
  }

  free(w_pawn_attack_array);
  free(b_pawn_attack_array);

}


int main(int argc, char const *argv[])
{

  buildPawnAttackArrays();

  return 0;
}




