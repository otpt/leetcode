class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int min1 = INT_MAX, max1 = INT_MIN;
        for (auto& a : A) {
            min1 = min(min1, a);
            max1 = max(max1, a);
        }
        
        return max(max1 - min1 - 2 * K, 0);
    }
};
