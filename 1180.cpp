class Solution {
public:
    int countLetters(string S) {
        int result = 0;
        char prev = S[0];
        int count = 0;
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == prev) ++count;
            else {
                result += (count * (count + 1)) / 2;
                prev = S[i];
                count = 1;
            } 
        }
        result += (count * (count + 1)) / 2;
        return result ;
    }
};
