class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int length = A.size();
        
        for (int i = 0; ; ++i) {
            
            if (A[i] == A[i + 1]) {
                return A[i];
            }
            
            if (i < length - 2 && A[i] == A[i + 2]) {
                return A[i];
            }
            
            if (i < length - 3 && A[i] == A[i + 3]) {
                return A[i];
            }
        }
        
        return A[0];
    }
};
