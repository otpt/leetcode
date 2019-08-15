class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sum = 0;
        vector<int> projection(grid[0].size(), 0);
        for (auto& line : grid) {
            int max_in_line = 0;
            
            for (int i = 0; i < line.size(); ++i) {
                sum += line[i] > 0;
                max_in_line = max(max_in_line, line[i]);
                projection[i] = max(projection[i], line[i]);
            }
            sum += max_in_line;
        }
        for(auto v : projection) {
            sum += v;
        }
            
        return sum;
    }
};
