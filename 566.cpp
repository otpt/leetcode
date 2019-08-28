class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (r * c != nums.size() * nums[0].size()) {
            return nums;
        }
        
        vector<vector<int>> reshape(r, vector<int>(c));
        int row = 0;
        int col = 0;
        for (auto & line : nums) {
            for (auto & num : line) {
                reshape[row][col++] = num;
                if (col == c) {
                    col = 0;
                    ++row;
                }
            }
        }
        return reshape;
    }
};
