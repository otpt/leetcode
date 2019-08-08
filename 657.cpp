class Solution {
public:
    bool judgeCircle(string moves) {
        int H = 0;
        int V = 0;
        
        for (auto& move : moves) {
            switch (move) {
                case 'L':
                    --H;
                    break;
                case 'R':
                    ++H;
                    break;
                case 'U':
                    ++V;
                    break;
                case 'D':
                    --V;
                    break;
            }
        }
        return H == 0 && V == 0;
    }
};
