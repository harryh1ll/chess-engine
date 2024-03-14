#ifndef PAWN_ATTACKS_H
#define PAWN_ATTACKS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "utils.h"
#include "constants.h"
#include "numc.h"

uint64_t getPawnAttacks(int squareID, int colour);
uint64_t* buildPawnAttackArrays();


#endif // PAWN_ATTACKS_H