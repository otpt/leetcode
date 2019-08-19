class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int sum = 0;
        for (auto ch : S) {
            int space = 100 - sum % 100;
            sum += (space < widths[ch - 'a'] ? space : 0) + widths[ch - 'a'];
        }
        return vector<int>{sum / 100 + 1, sum % 100};
    }
};
