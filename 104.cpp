class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        int depth = 0;
        queue<TreeNode*> queue;
        queue.push(root);
        queue.push(NULL);
        while (!queue.empty()) {
            TreeNode* node = queue.front();
            queue.pop();
            if (node == NULL) {
                ++depth;
                if (!queue.empty()) {
                    queue.push(NULL);
                }
            } else {
                if (node -> left) {
                    queue.push(node -> left);
                }
                if (node -> right) {
                    queue.push(node -> right);
                }
            }
        }
        return depth;
    }
};
