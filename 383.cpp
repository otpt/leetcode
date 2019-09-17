class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_multiset<char> letters;
        for (auto & m : magazine) {
            letters.insert(m);
        }
        for (auto & n : ransomNote) {
            auto it = letters.find(n);
            if (it == letters.end()) {
                return false;
            }
            letters.erase(it);
        }
        return true;
    }
};
