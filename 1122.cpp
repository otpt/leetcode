class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> count(1001, 0);
    
        for (auto element : arr1) {
            count[element]++;
        }
        
        vector<int> result;
        for (auto & element : arr2) {
            while (count[element]--) {
                result.push_back(element);
            }
        }
        
        for (int i = 0; i < 1001; ++i) {
            while (count[i]-- > 0) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
