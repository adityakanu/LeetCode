class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
        // return bitset<sizeof(int)> (start^goal).count();
    }
};