class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        
        std::unordered_multimap<int, size_t> b_positions;
        size_t index = 0;
        
        for (auto& b_element : B) {
            b_positions.insert(pair<int, size_t>(b_element, index++));
        }
        
        vector<int> result;
        
        for (auto& a_element : A) {
            const auto& iterator = b_positions.find(a_element);
            result.push_back(iterator -> second);
            b_positions.erase(iterator);
        }
        
        return result;
    }
};
