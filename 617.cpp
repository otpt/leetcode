/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {        
        if (t1 == NULL) {
            return t2;
        }
        
        if (t2 == NULL) {
            return t1;
        }
        
        TreeNode* newNode = new TreeNode(t1 -> val + t2 -> val);
        newNode -> left = mergeTrees(t1 -> left, t2 -> left);
        newNode -> right = mergeTrees(t1 -> right, t2 -> right);
        
        return newNode;
    }
};
