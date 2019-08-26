class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        
        int count = 0;
        for (int i = L; i <= R; ++i) {
            int bits = 0;
            int tmp = i;
            while (tmp) {
                bits += (tmp & 1);
                tmp >>= 1;
            }
            if (primes.find(bits) != primes.end()) {
                ++count;
            }
        }
        return count;
    }
};
