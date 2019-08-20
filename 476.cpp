class Solution {
public:
    int findComplement(int num) {
        int result = 0;
        
        int shift = 0;
        while (num >> shift) {
            result |= (~(num >> shift) & 1) << shift;
            shift++;
        }
        
        return result;
    }
};
