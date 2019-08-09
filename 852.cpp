class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int index = 0;
        
        while (index < A.size() - 1 && A[index] < A[index + 1]) {
            ++index;
        }
        
        return index;
    }
};
