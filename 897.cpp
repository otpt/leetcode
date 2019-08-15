class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }
        
        TreeNode* result = NULL;
        TreeNode* last = NULL;
        
        stack<TreeNode*> nodeStack;
        
        nodeStack.push(root);
        while (!nodeStack.empty())  {
            TreeNode* node = nodeStack.top();
            nodeStack.pop();
            
            if (node == NULL) {
                node = nodeStack.top();
                nodeStack.pop();
                last -> right = new TreeNode(node -> val);
                last = last -> right;                
            } else {
                if (node -> right) {
                    nodeStack.push(node -> right);
                }
                if (node -> left) {
                    nodeStack.push(node);
                    nodeStack.push(NULL);
                    nodeStack.push(node -> left);
                } else {
                    if (last == NULL) {
                        result = new TreeNode(node -> val);
                        last = result;
                    } else {
                        last -> right = new TreeNode(node -> val);
                        last = last -> right;
                    }
                }
            }
        }
        
        return result;
    }
};
