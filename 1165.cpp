class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char, int> pos;
        for (int i = 0; i < keyboard.size(); ++i) {
            pos[keyboard[i]] = i;
        }
        
        int prev = 0;
        int count = 0;
        for (auto & w : word) {
            count += abs(pos[w] - prev);
            prev = pos[w];
        }
        return count;
    }
};
