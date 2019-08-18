class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> result(S.size(), -1);
        
        int prev = -S.size();
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == C) {
                int index = i;
                while (index >= 0 && result[index] == -1) {
                    result[index--] = min(index - prev, i - index);
                }
                prev = i;
            } 
        }
        int index = S.size() - 1;
        while (index >= 0 && result[index] == -1) {
            result[index--] = index - prev;
        }
        
        return result;
    }
};
