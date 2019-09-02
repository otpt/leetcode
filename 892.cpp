class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        int result = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == 0) {
                    result += grid[i][j];
                }
                if  (j == 0) {
                    result += grid[i][j];
                }
                
                if (grid[i][j] != 0) {
                    result += 2;
                }
                if (j != cols - 1) {
                    result += abs(grid[i][j] - grid[i][j + 1]);
                } else {
                    result += grid[i][j];
                }
                if (i != rows - 1) {
                    result += abs(grid[i][j] - grid[i + 1][j]);
                } else {
                    result += grid[i][j];
                }
            }
        }
        return result;
    }
};
