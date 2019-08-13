class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int even = 0;
        int odd = 1;
        while (even < A.size()) {
            while (even < A.size() && ((A[even] & 1) == 0)) {
                even += 2;
            }
            while (odd < A.size() && (A[odd] & 1)) {
                odd += 2;
            }
            
            if (even < A.size()) {
                int tmp = A[even];
                A[even] = A[odd];
                A[odd] = tmp;                
            }
        }
        
        return A;
    }
};
