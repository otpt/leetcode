class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
        vector<string> result;
        
        if (s.empty()) return result;
        
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == '+' && s[i + 1] == '+') {
                result.push_back(s.substr(0, i) + "--" + s.substr(i + 2, s.size() - i - 2));
            }
        }
        
        return result;
    }
};
