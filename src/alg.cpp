// Copyright 2025 UNN-CS
#include <cmath>
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (uint64_t devider = 2; devider <= std::sqrt(value); devider++) {
    if (value % devider == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t counter = 0;
  uint64_t i = 0;
  while (counter != n) {
    i++;
    if (checkPrime(i)) {
      counter++;
    }
  }
  return i;
}

uint64_t nextPrime(uint64_t value) {
  value = ((value >> 1) << 1) + 1;
  do {
    value += 2;
  } while (!checkPrime(value));
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t amount = 0;
  for (uint64_t i = 1; i < hbound; i += 2) {
    if (checkPrime(i)) {
      amount += i;
    }
  }
  if (hbound > 2) {
    amount += 2;
  }
  return amount;
}
