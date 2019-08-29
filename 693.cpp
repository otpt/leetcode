class Solution {
public:
    bool hasAlternatingBits(int n) {
        int iTest = ((n & 1 ^ 1) | (n << 1)) ^ n;
        return ( iTest & (iTest + 1) ) == 0;
    }
};
