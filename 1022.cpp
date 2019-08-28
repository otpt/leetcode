class Solution {
public:
    int sumRootToLeaf(TreeNode* root, int sum = 0) {
        int value = (sum << 1) + root -> val; 
        if (!(root -> left) && !(root -> right)) {
            return value;
        } else {
            return (root -> left ? sumRootToLeaf(root -> left, value) : 0) + (root -> right ? sumRootToLeaf(root -> right, value) : 0);
        }
    }
};
