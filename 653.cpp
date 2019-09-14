class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> values;
        queue<TreeNode*> nodes;
        nodes.push(root);
        while(nodes.size()) {
            TreeNode* node = nodes.front();
            nodes.pop();
            if (!node) {
                continue;
            }
            if (values.count(k - node -> val)) {
                return true;
            }
            values.insert(node -> val);
            nodes.push(node -> left);
            nodes.push(node -> right);
        }
        return false;
    }
};
