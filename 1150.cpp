class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right) {
            int middle = (left + right) / 2;
            if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }
        
        int begin;
        if (right < nums.size() && nums[right] == target) {
            begin = right;
        } else {
            return false;
        }
        
        left = begin + 1;
        right = nums.size();
        while (left < right) {
            int middle  = (left + right) / 2;
            if (nums[middle] > target) {
                right = middle;
            } else {
                left = middle + 1;
            }
        }
        
        return (right - begin) > nums.size() / 2;
    }
};
