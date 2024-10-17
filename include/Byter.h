class Byter {
public:
    // Set the bit at position to 1
    static int setBit(int num, int position);

    // Clear the bit at position to 0
    static int clearBit(int num, int position);

    // Toggle the bit at position (flip from 0 to 1 or 1 to 0)
    static int toggleBit(int num, int position);

    // Check if the bit at position is 1
    static bool checkBit(int num, int position);

    // Count the number of set bits (1s)
    static int countSetBits(int num);

    // Reverse the bits in a number
    static int reverseBits(int num);
};
