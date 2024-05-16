#include "pch.h"
#include "../PrimeFactorKATA/prime_factors.cpp"
#include <vector>

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}