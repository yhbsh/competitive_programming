

/* 
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;
    
} node;

*/


void decode_huff(node * root, string s) {
    
    node *current = root;
    
        
    string message;
    
    for (int i = 0; i < s.size() + 1; i++) {
        
        if (current->left == nullptr && current->right == nullptr) {
            message.push_back(current->data);   
            current = root;
        }
        
        
        if (s[i] == '0') {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    
    cout << message << endl;
}

