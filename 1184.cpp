class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sum = 0;
        for (auto & d : distance) {
            sum += d;
        }
        
        int r = 0;
        for (int i = min(start, destination); i < max(start, destination); ++i) {
            r += distance[i];
        }
        
        return min(r, sum - r);
    }
};
