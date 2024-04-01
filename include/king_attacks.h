#ifndef KING_ATTACKS_H
#define KING_ATTACKS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "utils.h"
#include "constants.h"
#include "numc.h"

uint64_t getKingAttacks(int squareID);
uint64_t* buildKingAttackArray();


#endif // KING_ATTACKS_H