class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numset(nums1.begin(), nums1.end());
        
        vector<int> result;
        for (auto & num : nums2) {
            if (numset.find(num) != numset.end()) {
                result.push_back(num);
                numset.erase(num);
            }
        }
        return result;
    }
};
