class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> greater;
        priority_queue<int, std::vector<int>, std::greater<int>> lower_queue;
        for (auto & num : nums2) {
            while(!lower_queue.empty() && lower_queue.top() < num) {
                int lower = lower_queue.top();
                lower_queue.pop();
                greater[lower] = num;
            }
            lower_queue.push(num);
        }
        
        while(!lower_queue.empty()) {
            greater[lower_queue.top()] = -1;
            lower_queue.pop();
        }        
        
        vector<int> result;
        for (auto & num : nums1) {
            result.push_back(greater[num]);
        }
        return result;
    }
};
