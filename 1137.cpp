class Solution {
public:
    int tribonacci(int n) {
        if (n == 0 || n == 1) return n;
        if (n == 2) return 1;
        
        int a = 2;
        int b = 1;
        int c = 1;
        while (n-- - 3) {
            a = a + b + c;
            b = a - b - c;
            c = a - b - c;
        }
        
        return a;
    }
};
