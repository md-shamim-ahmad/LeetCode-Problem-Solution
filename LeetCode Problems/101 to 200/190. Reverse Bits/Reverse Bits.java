class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int result = 0;
        for (int i = 0; i < 32; i++) {
            // calculating leftsignificant bit
            int leftSignificantBit = n & 1;
            // left shift 31-i times
            int rev = leftSignificantBit << (31 - i);
            // set bits
            result = result | rev;
            n = n >> 1;
        }
        return result;

    }

}
