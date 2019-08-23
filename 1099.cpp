class Solution {
public:
    int bsearch(vector<int>& A, int L, int R, int K) {
        int num = INT_MAX;
        while (L <= R) {
            int mid = (L+R)/2;
            if (A[mid] >= K) R = mid-1;
            else {
                num = A[mid];
                L = mid+1;
            }
        }
        return num;
    }
    
    int twoSumLessThanK(vector<int>& A, int K) {
        if (A.size() < 2) return -1;
        sort(A.begin(), A.end());
        int ans = -1;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] >= K) return ans;
            int one = A[i];
            int two = bsearch(A, i+1, A.size()-1, K-one);
            if (two == INT_MAX) return ans;
            if (one+two > ans) {
                ans = one+two;
            }   
        }
        return ans;
    }
};
