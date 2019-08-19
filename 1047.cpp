class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> letters;
        for (auto & ch : S) {
            if (!letters.empty() && ch == letters.top()) {
                letters.pop();
            } else {
                letters.push(ch);
            }
        }
        
        string result;
        while (!letters.empty()) {
            result.insert(0, 1, letters.top());
            letters.pop();
        }
        return result;
    }
};
