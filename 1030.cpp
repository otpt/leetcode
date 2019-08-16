class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> result;
        
        int max_dist = max(r0, R - r0 - 1) + max(c0, C - c0 - 1);
        result.push_back({r0, c0});
        for (int d = 1; d <= max_dist; ++d) {
            for (int i = - d + 1; i < 0; ++i) {
                if (r0 + i >= 0 && c0 + d + i < C) {
                    result.push_back({r0 + i, c0 + d + i});   
                }
            }
            
            for (int i = d - 1; i > 0; --i) {
                if (r0 + i < R && (c0 + d - i) < C) {
                    result.push_back({r0 + i, c0 + d - i});  
                }
            }
            
            for (int i = - d + 1; i < 0; ++i) {
                if (r0 + i >= 0 && c0 - d - i >= 0) {
                    result.push_back({r0 + i, c0 - d - i});  
                }
            }
            
            for (int i = d - 1; i > 0; --i) {
                if (r0 + i < R && c0 - d + i >= 0) {
                    result.push_back({r0 + i, c0 - d + i});  
                }
            }            
            
            if (r0 - d >= 0) {
                result.push_back({r0 - d, c0});   
            }
            if (r0 + d < R) {
                result.push_back({r0 + d, c0});   
            }
            if (c0 + d < C) {
                result.push_back({r0, c0 + d});   
            }
            if (c0 - d >= 0) {
                result.push_back({r0, c0 - d});   
            }            
        }
        
        return result;
    }
};
