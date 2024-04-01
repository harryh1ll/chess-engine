#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "king_attacks.h"


int main(int argc, char const *argv[])
{  

  uint64_t* king_attacks = NULL;

  king_attacks = buildKingAttackArray();

  for (int square = 0; square < 64; ++square) {
    printBitboard(king_attacks[square]);
    printf("\n");
  }


  free(king_attacks);

  return 0;
}



