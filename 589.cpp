class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        
        stack<Node*> nodeStack;
        nodeStack.push(root);
        
        while (!nodeStack.empty()) {
            Node* node = nodeStack.top();
            nodeStack.pop();
            
            if (node == NULL) {
                continue;
            }
            
            result.push_back(node -> val);
            for (auto it = (node -> children).rbegin(); it != (node -> children).rend(); ++it) {
                nodeStack.push(*it);
            }
        }
        
        return result;
    }
};
