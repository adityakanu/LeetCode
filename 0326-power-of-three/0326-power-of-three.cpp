class Solution {
public:
    bool isPowerOfThree(int n) {
        // 1162261467 is 3^19,  3^20 is bigger than int
        //We can use this method to judge power of 2, 3, 5, 7, 11, ... since they are prime numbers. But we can't do this to 4, because 4 = 2 * 2 and 4^n % 2^m == 0.
        return ( n>0 &&  1162261467%n==0);
    }
};