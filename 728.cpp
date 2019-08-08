class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        
        for (int i = left; i <= right; ++i) {
            int digits = i;
            
            while (digits != 0) {
                int digit = digits % 10;
                
                if (digit == 0 || i % digit != 0) {
                    break;
                }
                                
                digits /= 10;
            }
            
            if (digits == 0) {
                result.push_back(i);   
            }
        }
        
        return result;
    }
};
