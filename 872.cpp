class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafs;
        
        stack<TreeNode*> nodes;
        nodes.push(root1);
        nodes.push(root2);
        while(!nodes.empty()) {
            TreeNode* node = nodes.top();
            nodes.pop();
            
            if (!(node -> left) && !(node -> right)) {
                leafs.push_back(node -> val);
                continue;
            }
            
            if (node -> right) {
                nodes.push(node -> right);
            }
            if (node -> left) {
                nodes.push(node -> left);
            }

        }
        
        if ((leafs.size() & 1) == 0) {
            for (int i = 0, j = leafs.size() / 2; j < leafs.size(); ++i, ++j) {
                if (leafs[i] != leafs[j]) {
                    return false;
                }
            }
        } else {
            return false;
        }
        
        return true;
    }
};
