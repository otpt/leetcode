class Solution {
public:
    vector<vector<int>> indexPairs(string text, vector<string>& words) {
        vector<vector<int>> result;
        for (auto & word : words) {
            int pos = text.find(word);
            while (pos != string::npos) {
                result.push_back({pos, pos + word.size() - 1});
                pos = text.find(word, pos + 1);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
