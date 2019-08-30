class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        unordered_set<int> B_set;
        int a_sum = 0;
        int b_sum = 0;
        for (auto & b : B) {
            B_set.insert(b);
            b_sum += b;
        }
        for (auto & a : A) {
            a_sum += a;
        }
        
        int d = (a_sum - b_sum) / 2;
        for (auto & a : A) {
            auto it = B_set.find(a - d);
            if (it != B_set.end()) {
                return {a, *it};
            }
        }
        return {0, 0};
    }
};
