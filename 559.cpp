class Solution {
public:
    int maxDepth(Node* root, int depth = 0) {
        if (root == NULL) {
            return depth;
        }
        
        ++depth;
        int max_depth = depth;
        for (auto node : root -> children) {
            max_depth = max(max_depth, maxDepth(node, depth));
        }
        return max_depth;
    }
};
