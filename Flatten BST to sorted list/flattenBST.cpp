//User function Template for C++

/* Node of the binary search tree 
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

*/

class Solution
{
public:
    Node* newRoot = nullptr, *prev = nullptr;
    void dfs(Node* node){
        if(!node){
            return ;
        }
        dfs(node->left);
        
        if(prev){
            prev->left = nullptr;
            prev->right = node;
        }
        else{
            newRoot = node;
        }
        prev = node;
        
        dfs(node->right);
        prev->left = nullptr;
        
    }
    
    Node *flattenBST(Node *root)
    {
        // code here
        dfs(root);
        return newRoot;
    }
};