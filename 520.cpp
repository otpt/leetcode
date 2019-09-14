class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() < 2) {
            return true;
        }
        
        bool upper = false;
        bool lower = false;
        
        if (word[0] >= 'a' && word[0] <= 'z') {
            lower = true;
        }
        
        for (int i = 1; i < word.size(); ++i) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                upper = true;
            }
            if (word[i] >= 'a' && word[i] <= 'z') {
                lower = true;
            }
            if (upper && lower) {
                return false;
            }
        }
        
        return true;
    }
};
