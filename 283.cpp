class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (auto & n : nums) {
            if (n != 0) {
                nums[index++] = n;
            }
        }
        while (index < nums.size()) {
            nums[index++] = 0;
        }
    }
};
