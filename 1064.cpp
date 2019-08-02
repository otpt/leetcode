class Solution {
public:
    int fixedPoint(vector<int>& A) {
        size_t left = 0;
        size_t right = A.size() - 1;
        
        while (right - left > 1) {
            size_t mid = (right + left) / 2;
            
            if (A[mid] >= mid) {
                right = mid;
            } else {
                left = mid;
            }
        }
        
        if (A[left] == left) {
            return left;
        }
        if (A[right] == right) {
            return right;
        }
        
        return -1;
    }
};
