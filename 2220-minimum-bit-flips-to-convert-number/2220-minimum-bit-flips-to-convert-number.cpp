class Solution {
public:
    int minBitFlips(int start, int goal) {
        // return __builtin_popcount(start^goal);
        bitset<sizeof(int)*8> result(start^goal);
        return result.count();
    }
};