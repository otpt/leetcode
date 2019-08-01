class Solution {
public:
    int numJewelsInStones(string J, string S) {
    
        std::unordered_set<char> jewels;
        for (auto& j : J) {
            jewels.insert(j);
        }
        
        int jewels_number = 0;
        for (auto& s : S) {
            jewels_number += (jewels.find(s) != jewels.end());
        }
        
        return jewels_number;
    }
};
