class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        }
        int digit_sum = 0;
        while (num > 0) {
            digit_sum += num % 10;
            num /= 10;
        }
        return digit_sum % 9 == 0 ? 9 : digit_sum % 9;
    }
};

