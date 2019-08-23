class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> map;
        
        int begin = -1;
        for (int pos = 0; pos < A.size(); ++pos) {
            if (A[pos] == ' ') {
                if (begin >= 0) {
                    ++map[A.substr(begin, pos - begin)];
                    begin = -1;
                }
            } else {
                if (begin < 0) {
                    begin = pos;
                }
            }
        }
        if (begin >= 0) {
            ++map[A.substr(begin, A.size())];
        }
        
        begin = -1;
        for (int pos = 0; pos < B.size(); ++pos) {
            if (B[pos] == ' ') {
                if (begin >= 0) {      
                    ++map[B.substr(begin, pos - begin)];
                    begin = -1;
                }
            } else {
                if (begin < 0) {
                    begin = pos;
                }
            }
        }
        if (begin >= 0) {
            ++map[B.substr(begin, B.size())];
        }
        
        vector<string> result;
        for (auto & m : map) {
            if (m.second == 1) {
                result.push_back(m.first);
            }
        }
        
        return result;
    }
};
