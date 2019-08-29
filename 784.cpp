class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        string current(S);
        transform(S.begin(), S.end(), current.begin(), ::tolower);
        
        vector<string> result(1, current);
        
        int length = S.size();
        int index = 0;
        while (index < length) {
            if (!isdigit(current[index]) && islower(current[index])) {
                current[index] = toupper(current[index]);
                --index;
                while(index >= 0) {
                    current[index] = tolower(current[index]);
                    --index;
                }
                result.push_back(current);
                index = 0;
            } else {
                ++index;    
            }
        }
        return result;
    }
};
