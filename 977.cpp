class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        int left = 0;
        int right = A.size();
        while (left + 1 < right) {
            size_t mid = (right + left) / 2;
            if (A[mid] >= 0) {
                right = mid;
            } else {
                left = mid;
            }
        }

        vector<int> result;
        while (left > -1 && right < A.size()) {
            int leftSquare = A[left] * A[left];
            int rightSquare = A[right] * A[right];
            if (leftSquare < rightSquare) {
                result.push_back(leftSquare);    
                --left;
            } else {
                result.push_back(rightSquare);    
                ++right;
            }
        }
        while (left > -1) {
            result.push_back(A[left] * A[left]);
            --left;
        }
        while (right < A.size()) {
            result.push_back(A[right] * A[right]);
            ++right;
        }
        
        return result;
    }
};
