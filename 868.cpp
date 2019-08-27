class Solution {
public:
    int binaryGap(int N) {
        int prev = -1;
        int pos = 0;
        int max_dist = 0;
        
        while (N) {
            if (N & 1) {
                if (prev >= 0) {
                    max_dist = max(pos - prev, max_dist);
                }
                prev = pos;
            }
            
            ++pos;
            N >>= 1;
        }
        
        return max_dist;
    }
};
