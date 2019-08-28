class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0) return 1;
        int mask = 0;
        int shift = 0;
        while (N >> shift++) {
            mask = (mask << 1) | 1;
        }
        return mask - N;
    }
};
