class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if (A.size() < 2) {
            return true;   
        }
        int index = 1;
        while (index < A.size() && A[index] == A[index - 1]) {
            ++index;
        }
        if (index == A.size()) {
            return true;
        }
        bool inc = A[index] > A[index - 1];
        while (index < A.size()) {
            if (A[index] != A[index - 1]) {
                if (inc && (A[index] < A[index - 1]) || !inc && (A[index] > A[index - 1])) {
                    return false;
                }
            }
            ++index;
        }
        return true;
    }
};
