#include "king_attacks.h"


uint64_t getKingAttacks(int squareID){

  // inputs:
  // (int) square = square which contains the king (0->63)
  // NB! Unlike for pawns, the colour is not required here as 
  // the attack board will be the same for both colours 

  // returns:
  // (uint64_t) attack_board = squares which the king on 
  // squareID can attack

  // This is called by buildKingAttackArrays which will build a
  // pre-computed array of all king attacks for all squares. 
  // This function is just generating the attacks for a single 
  // square.


  // The board shown below highlights the king (K) and 
  // specifies the notation for each move. These are used
  // below to define the limits i.e illegal move outside 
  // the board.
  // 
  //   8   0  0  0  0  0  0  0  0
  //   7   0  0  0  0  0  0  0  0
  //   6   0  0  0  0  0  0  0  0
  //   5   0  0  B  C  D  0  0  0
  //   4   0  0  A  K  E  0  0  0
  //   3   0  0  H  G  F  0  0  0
  //   2   0  0  0  0  0  0  0  0
  //   1   0  0  0  0  0  0  0  0
  //
  //       a  b  c  d  e  f  g  h

  uint64_t king_board = 0;
  uint64_t attack_board = 0;

  // place a king on the board at the square
  setBit(&king_board, squareID, 1);

  attack_board |= ((king_board << 7)  & not_H_file);   // B
  attack_board |= ((king_board << 8)  & not_H_file);   // C
  attack_board |= ((king_board << 9)  & not_A_file);   // D
  attack_board |= ((king_board << 1)  & not_A_file);   // E

  attack_board |= ((king_board >> 7)  & not_A_file);   // F
  attack_board |= ((king_board >> 8)  & not_A_file);   // G
  attack_board |= ((king_board >> 9)  & not_H_file);   // H
  attack_board |= ((king_board >> 1)  & not_H_file);   // A



  return attack_board;
}


uint64_t* buildKingAttackArray(){

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

  uint64_t* king_attacks = u64Zeros(64);

  for (int square = 0; square < 64; ++square) {
    king_attacks[square] = getKingAttacks(square);
  }


  return king_attacks;

}



