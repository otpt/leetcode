class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        return cutRight(cutLeft(root, L), R);
    }
private:
    TreeNode* cutLeft(TreeNode* root, int L) {
        if (!root) {
            return NULL;
        }
        
        if (root -> val >= L) {
            root -> left = cutLeft(root -> left, L);
            return root;
        } else {
            return cutLeft(root -> right, L);
        }
    }
    
    TreeNode* cutRight(TreeNode* root, int R) {
        if (!root) {
            return NULL;
        }
        
        if (root -> val <= R) {
            root -> right = cutRight(root -> right, R);
            return root;
        } else {
            return cutRight(root -> left, R);
        }
    }
};
