class Solution {
public:
    string reverseWords(string s) {
        string answer;
        int length = 0;
        
        for (auto& ch : s) {
            if (ch == ' ') {
                reverse(answer.end() - length, answer.end());
                length = 0;
            } else {
                length++;
            }
            answer += ch;
        }
        reverse(answer.end() - length, answer.end());
        
        return answer;
    }
};
