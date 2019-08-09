class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> result;
        result.push_back(0);
        
        int d_counter = 0;
        int i_counter = 0;
        for (auto& ch : S) {
            result.push_back(ch == 'I' ? ++i_counter : --d_counter);
        }
        for (auto& item : result) {
            item -= d_counter;
        }
        
        return result;
    }
};
