class Solution {    
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        
        vector<string> result;
        for (auto & word : words) {
            if (word.empty()) {
                continue;
            }
            
            char first = tolower(word[0]);
            unordered_set<char> & set = row1.count(first) > 0 ? row1 : (row2.count(first) > 0 ? row2 : row3);
            bool success = true;
            
            for (auto & ch : word) {  
                if (set.count(tolower(ch)) == 0) {
                    success = false;
                    break;
                }
            }
            if (success) {
                result.push_back(word);    
            }
        }
        return result;
    }
};
