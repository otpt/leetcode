class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> kinds;
        int candies_count_half = candies.size() / 2;
        int candies_count = candies.size();
        
        for (int i = 0; i < candies_count; ++i) {
            kinds.insert(candies[i]);
            if (kinds.size() >= candies_count_half) return candies_count_half;
        }
        
        return kinds.size();
    }
};
