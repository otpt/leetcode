class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int> numset(nums1.begin(), nums1.end());
        vector<int> result;
        for (auto & num : nums2) {
            auto it = numset.find(num);
            if (it != numset.end()) {
                result.push_back(num);
                numset.erase(it);
            }
        }
        return result;
    }
};
