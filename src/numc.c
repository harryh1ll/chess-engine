#include "numc.h"


uint64_t* u64Zeros(int n) {

  uint64_t* array = (uint64_t*)malloc(n * sizeof(uint64_t));

  for (int i = 0; i < n; i++) {
    array[i] = 0;
  }

  return array;
}