class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int result = 0;
        
        unordered_map<char, int> letters;
        for (auto & ch : chars) {
            ++letters[ch];
        }
        
        for (auto & word : words) {
            unordered_map<char, int> word_letters;
            bool good = true;
            for (auto & letter : word) {
                ++word_letters[letter];
                if (letters.find(letter) == letters.end() ||
                   letters[letter] < word_letters[letter]) {
                    good = false;
                    break;
                }
            }
            if (good) {
                result += word.size();
            }
        }
        
        return result;
    }
};
