class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<int> letter_counter(256, 0);
        for (auto & ch : s) {
            ++letter_counter[ch];
        }
        bool odd = false;
        for (auto c : letter_counter) {
            if (c & 1) {
                if (odd) return false;
                odd = true;    
            }
        }
        return true;
    }
};
