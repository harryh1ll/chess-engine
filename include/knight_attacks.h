#ifndef NUMC_H
#define NUMC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "bitboard_utils.h"
#include "bitboard_constants.h"
#include "numc.h"

uint64_t getPawnAttacks(int squareID, int colour);
uint64_t* buildPawnAttackArrays();


#endif