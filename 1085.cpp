class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        int min = A[0];
        for (auto a : A) {
            if (a < min) {
                min = a;
            }
        }
        
        int sum = 0;
        while (min) {
            sum += min % 10;
            min /= 10;
        }
        
        return 1 - (sum & 1);
    }
};
