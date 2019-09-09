class Solution {
private:
    int f(string& s) {
        char min = 'z';
        int count = 0;
        for (auto & ch : s) {
            if (ch < min) {
                min = ch;
                count = 1;
            } else if (ch == min) {
                ++count;
            }
        }
        return count;
    }
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> result;
        for (auto & q : queries) {
            int fr = f(q);
            int count = 0;
            for (auto & w : words) {
                count += (f(w) > fr);
            }
            result.push_back(count);
        }
        return result;
    }
};
