#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "bitboard_utils.h"
#include "bitboard_constants.h"
#include "numc.h"


uint64_t getKnightAttacks(int squareID){

  // inputs:
  // (int) square = square which contains a single knight (0->63)
  // NB! Unlike for pawns, the colour is not required here as 
  // the attach board will be the same for both colours as the 
  // knights can move forwards and backwards.

  // returns:
  // (uint64_t) attack_board = squares which the knight on 
  // squareID can attack

  // This is called by buildKnightAttackArrays which will build a
  // pre-computed array of all knight attacks for all squares. 
  // This function is just generating the attacks for a single 
  // square.


  // The board shown below highlights the knight (N) and 
  // specifies the notation for each 'jump'. These are used
  // below to define the 'no jump' limits i.e illegal move
  // outisde the board.
  // 
  //   8   0  0  0  0  0  0  0  0
  //   7   0  0  0  0  0  0  0  0
  //   6   0  0  B  0  C  0  0  0
  //   5   0  A  0  0  0  D  0  0
  //   4   0  0  0  N  0  0  0  0
  //   3   0  H  0  0  0  E  0  0
  //   2   0  0  G  0  F  0  0  0
  //   1   0  0  0  0  0  0  0  0
  //
  //       a  b  c  d  e  f  g  h

  uint64_t knight_board = 0;
  uint64_t attack_board = 0;

  // place a knight on the board at the square
  setBit(&knight_board, squareID, 1);

  attack_board |= ((knight_board << 6) & not_GH_file);   // A
  attack_board |= ((knight_board << 15) & not_H_file);   // B
  attack_board |= ((knight_board << 17) & not_A_file);   // C
  attack_board |= ((knight_board << 10) & not_AB_file);  // D

  attack_board |= ((knight_board >> 6) & not_AB_file);   // E
  attack_board |= ((knight_board >> 15) & not_A_file);   // F
  attack_board |= ((knight_board >> 17) & not_H_file);   // G
  attack_board |= ((knight_board >> 10) & not_GH_file);  // H

  return attack_board;
}


void buildKnightAttackArrays(){

  // inputs:

  // returns:

  // Builds the knight attack array for each square. 
  // This 1D array has entries for each square and each colour. 
  // The returned uint64_t for each entry is a bitboard of the 
  // squares which are under 'attack' from the knight on this
  // square. Here 'attack' means any leaping move the knight 
  // can make. This is technically either a 'move' or a 
  // 'capture', which isn't known yet. Pre-computing this 
  // saves time as you don't recompute at each turn.

  uint64_t* knight_attacks = u64Zeros(64);

  for (int square = 0; square < 64; ++square) {
    knight_attacks[square] = getKnightAttacks(square);
  }

  for (int square = 0; square < 64; ++square) {
    printBitboard(knight_attacks[square]);
    printf("\n");
  }

  free(knight_attacks);

}



