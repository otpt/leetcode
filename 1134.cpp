class Solution {
public:
    bool isArmstrong(int N) {
        
        int number = N;
        vector<int> digits;
        while (number) {
            digits.push_back(number % 10);
            number /= 10;
        }
        
        int sum = 0;
        int k = digits.size();
        
        for (auto digit : digits) {
            int power = 1;
            
            if (digit == 0) {
                continue;
            }
            
            for (int i = 0; i < k; ++i) {
                if (INT_MAX / power >= digit) {
                    power *= digit;
                } else {
                    return false;
                }
            }
            
            if (INT_MAX - sum >= power) {
                sum += power;    
            } else {
                return false;
            }
            
        }
            
        return sum == N;
    }
};
