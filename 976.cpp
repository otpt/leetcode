class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        if (A.size() < 3) {
            return 0;
        }
        
        sort(A.begin(), A.end());
        
        for (int i = A.size() - 1; i >= 2; --i) {
            if (A[i - 1] + A[i - 2] > A[i]) {
                return A[i - 2] + A[i - 1] + A[i];
            }
        }
        return 0;
    }
};
