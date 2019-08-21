class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> queue;
        for (auto & stone : stones) {
            queue.push(stone);
        }
        
        while (queue.size() >= 2) {
            int big = queue.top();
            queue.pop();
            int small = queue.top();
            queue.pop();
            if (big != small) {
                queue.push(big - small);
            }
        }
        
        if (!queue.empty()) {
            return queue.top();
        }
        
        return 0;
    }
};
