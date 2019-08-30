class Solution {
public:
    int numberOfDays(int Y, int M) {
        vector<int> high = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (M == 2) {
            return 28 + (M % 4 == 0) - (M % 100 == 0);
        } else {
            return high[M];
        }
    }
};
