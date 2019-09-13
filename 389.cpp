class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_multiset<char> letters;
        for (auto & ch : t) {
            letters.insert(ch);
        }
        for (auto & ch : s) {
            letters.erase(letters.find(ch));
        }
        return *letters.begin();
    }
};
