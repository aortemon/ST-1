// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime1) {
  EXPECT_EQ(checkPrime(2000000), false);
}
TEST(st1, checkPrime2) {
  EXPECT_EQ(checkPrime(1), false);
}
TEST(st1, checkPrime3) {
  EXPECT_EQ(checkPrime(2), true);
}
TEST(st1, checkPrime4) {
  EXPECT_EQ(checkPrime(3), true);
}
TEST(st1, checkPrime5) {
  EXPECT_EQ(checkPrime(79), true);
}
TEST(st1, checkPrime6) {
  EXPECT_EQ(checkPrime(80), false);
}
TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);
}
TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(2), 3);
}
TEST(st1, nPrime3) {
  EXPECT_EQ(nPrime(3), 5);
}
TEST(st1, nPrime4) {
  EXPECT_EQ(nPrime(4), 7);
}
TEST(st1, nPrime5) {
  EXPECT_EQ(nPrime(5), 11);
}
TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(11), 13);
}
TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(15), 17);
}
TEST(st1, nextPrime3) {
  EXPECT_EQ(nextPrime(200), 211);
}
TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(5), 5);
}
TEST(st1, sumPrime2) {
  EXPECT_EQ(sumPrime(100), 1060);
}
