class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        for (auto& word : A) {
            sort(word.begin(), word.end());
        }
        
        vector<char> buffer;
        for (auto ch : A[0]) {
            buffer.push_back(ch);
        }

        for (int i = 1; i < A.size(); ++i) {
            vector<char> tmp_buffer;
            auto tmp_it = set_intersection(
                A[i].begin(), 
                A[i].end(), 
                buffer.begin(), 
                buffer.end(), 
                back_inserter(tmp_buffer));
            swap(tmp_buffer, buffer);
        }
        
        vector<string> result;
        for (auto ch : buffer) {
            result.push_back(string{ch});
        }
        return result;
    }
};
