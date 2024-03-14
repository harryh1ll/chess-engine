#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "pawn_attacks.h"


int main(int argc, char const *argv[])
{
  

  uint64_t* w_pawn_attack_array = NULL;
  // uint64_t* b_pawn_attack_array = NULL;

  w_pawn_attack_array = buildPawnAttackArrays();

  // buildKnightAttackArrays()

  for (int square = 0; square < 64; ++square) {
    printBitboard(w_pawn_attack_array[square]);
    printf("\n");
  }


  free(w_pawn_attack_array);
  // free(b_pawn_attack_array);

  return 0;
}



