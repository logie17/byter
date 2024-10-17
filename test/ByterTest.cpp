#include <gtest/gtest.h>
#include "Byter.h"

TEST(BitManipulationTest, SetBit) {
    // Test setting bit at position 2 in 0101 (binary)
    EXPECT_EQ(Byter::setBit(5, 2), 5);  // 5 is 0101 in binary, bit 2 is already set

    // Test setting bit at position 1 in 0100 (binary)
    EXPECT_EQ(Byter::setBit(4, 1), 6);  // 6 is 0110 in binary

    // Test setting bit at position 0 in 0000 (binary)
    EXPECT_EQ(Byter::setBit(0, 0), 1);  // 1 is 0001 in binary
}
