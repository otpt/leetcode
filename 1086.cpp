class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        vector<vector<int>> tops(1000, vector<int>(5));
        
        vector<vector<int>> averages;
        
        for (auto item : items) {
            int id = item[0];
            int value = item[1];
            
            
            int index = 0;
            while (index < 5 && tops[id][index] >= value) {
                index++;
            }
            
            while (index < 5) {
                int prev_value = tops[id][index];
                tops[id][index++] = value;
                value = prev_value;
            }
        }
        
        for (int i = 0; i < 1000; ++i) {
            int count = 0;
            int sum = 0;
            
            int index = 0;
            while (index < 5 && tops[i][index] != 0) {
                count++;
                sum += tops[i][index++];
            }
            
            if (sum != 0) {
                averages.push_back({i, sum / count});
            }
        }
        
        return averages;
    }
};
