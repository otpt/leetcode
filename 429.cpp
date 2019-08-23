class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        
        if (!root) {
            return result;
        }
        
        result.push_back(vector<int>{root -> val});
        queue<vector<Node*>> queue;
        queue.push(root -> children);
        while (!queue.empty()) {
            int level_size = queue.size();
            vector<int> level;
            
            while(level_size--) {
                for (auto & node : queue.front()) {
                    level.push_back(node -> val);
                    queue.push(node -> children);
                }
                queue.pop();
            }
            if (level.size() > 0) {
                result.push_back(level);    
            }
        }
        
        return result;
    }
};
