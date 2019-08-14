class Solution {
public:
    int fib(int N) {
        int a = 1;
        int b = 0;
        while (N--) {
            b = a + b;
            a = b - a;
        }
        return b;
    }
};
