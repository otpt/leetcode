class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        vector<int> occurence(1001, 0);
        for (auto a : A) {
            occurence[a]++;
        }
        
        for (int i = 1000; i >= 0; --i) {
            if (occurence[i] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};
