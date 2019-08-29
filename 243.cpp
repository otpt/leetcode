class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int length = words.size();
        int prev1 = -length;
        int prev2 = -length;
        int dist = INT_MAX;
        for (int i = 0; i < length; ++i) {
            if (words[i] == word1) {
                dist = min(dist, i - prev2);
                prev1 = i;
            } else if (words[i] == word2) {
                dist = min(dist, i - prev1);
                prev2 = i;
            }
        }
        return dist;
    }
};
