class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int result = 0;
        
        Node* root = new Node();
        
        for (auto& word : words) {
            string code = wordToMorseString(word);
            
            Node* current = root;
            
            for (auto& ch : code) {
                if (ch == '.') {
                    if (current -> left == NULL) {
                        current -> left = new Node();
                    }
                    current = current -> left;
                } else {
                    if (current -> right == NULL) {
                        current -> right = new Node();
                    }
                    current = current -> right;
                }
            }
            
            result += !current -> finish;
            current -> finish = true;
        }
        return result;        
    }
    
    struct Node {
        Node* left;
        Node* right;
        bool finish;
        
        Node() : left(NULL), right(NULL), finish(false) {}
    };

    
    string wordToMorseString(string word) {
        string codes[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string result;
        
        for (auto& ch : word) {
            result += codes[ch - 'a'];   
        }
        
        return result;
    }
};
