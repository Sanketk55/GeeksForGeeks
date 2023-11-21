// function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        function<void(Node*)>dfs=[&](Node* node){
            if(node->left==nullptr && node->right==nullptr){
                return;
            }
            
            Node* ptr=node->left;
            node->left=node->right;
            node->right=ptr;
            if(node->left){
                dfs(node->left);
            }
            if(node->right){
                dfs(node->right);
            }

        };
        dfs(node);
    }
};