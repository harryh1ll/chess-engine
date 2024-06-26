#include "pawn_attacks.h"


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

  if (colour == white){
    attack_board |= ((pawn_board << 7) & not_H_file);
    attack_board |= ((pawn_board << 9) & not_A_file);
  } else if (colour == black) {
    attack_board |= ((pawn_board >> 7) & not_A_file);
    attack_board |= ((pawn_board >> 9) & not_H_file);
  } else {
    printf("%s \n", "Something has gone horribly wrong");
  }

  return attack_board;
}


uint64_t* buildPawnAttackArrays(){

  // inputs:

  // returns: pointer to uint64_t. Array back to 
  // whatever function called it

  // Builds the pawn attack array for each square and
  // each colour. The returned pointer points to an array for each
  // entry is a bitboard of the squares which are under 'attack'
  // from the pawn on this square. Here 'attack' means
  // the diagonal which the pawns attack, rather than a 
  // pawn push or promotion. Pre-computing this saves time
  // as you don't recompute at each turn.

  uint64_t* w_pawn_attack_array = u64Zeros(64);
  // uint64_t* b_pawn_attack_array = u64Zeros(64);

  for (int square = 0; square < 64; ++square) {
    w_pawn_attack_array[square] = getPawnAttacks(square, 0);
    // b_pawn_attack_array[square] = getPawnAttacks(square, 1);
  }

  return w_pawn_attack_array;

}



