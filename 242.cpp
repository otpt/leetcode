class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_multiset<char> letters;
        for (auto & ch : s) {
            letters.insert(ch);
        }
        for (auto & ch : t) {
            auto iter = letters.find(ch);
            if (iter == letters.end()) {
                return false;
            }
            letters.erase(iter);
        }
        return letters.empty();
    }
};
