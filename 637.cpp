class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> queue;
        queue.push(root);
        
        vector<double> result;
        while (!queue.empty()) {
            int queue_size = queue.size();
            double sum = 0;
            for (int i = 0; i < queue_size; ++i) {
                sum += (queue.front() -> val);
                if (queue.front() -> left) {
                    queue.push(queue.front() -> left);
                }
                if (queue.front() -> right) {
                    queue.push(queue.front() -> right);    
                }
                queue.pop();
            }
            result.push_back(sum / queue_size);
        }
        return result;
    }
};
