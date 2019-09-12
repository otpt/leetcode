class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int result = 0;
        
        for (auto & num : nums) {
            if (num) {
                ++current;
                result = max(result, current);
            } else {
                current = 0;
            }
        }
        
        return result;
    }
};
