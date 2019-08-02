class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        if (root == NULL) return 0;
        
        int sum = 0;
        
        if (root -> val >= L && root -> val <= R) {
            sum += root -> val;
        }
        
        if (root -> val > L) {
            sum += rangeSumBST(root -> left, L, R);
        }
        if (root -> val < R) {
            sum += rangeSumBST(root -> right, L, R);
        }
        
        return sum;
    }
};
