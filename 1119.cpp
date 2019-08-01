class Solution {
public:
    string removeVowels(string S) {
        string result = "";
        
        unordered_set skip = {'a', 'e', 'i', 'o', 'u'};
        
        for (auto ch : S) {
            if (skip.find(ch) == skip.end()) {
                result += ch;
            }
        }
        
        return result;
    }
};
