class Solution {
public:
    string toGoatLatin(string S) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string result = "";
        stringstream ss(S);
        string token;
        int index = 1;
        while (ss >> token) {
            if (vowels.find(token[0]) != vowels.end()) {
                token += "ma";
            } else {
                token = token.substr(1, token.size() - 1) + token[0] + "ma";
            }
            for (int i = 0; i < index; ++i) {
                token += 'a';
            }
            ++index;
            result += token + " ";
        }
        if (result.size() > 0) {
            result.erase(result.size() - 1, 1);
        }
        
        return result;
    }
};
