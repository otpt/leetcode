class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> result;
        
        for (auto& line : A) {
            vector<int> new_line;
            new_line.reserve(line.size());
            
            for (int i = line.size() - 1; i >= 0; --i) {
                new_line.push_back(1 - line[i]);
            }
            
            result.push_back(new_line);
        }
        
        return result;
    }
};
