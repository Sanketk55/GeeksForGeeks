/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */


class Solution
{
    public:
        /*You are required to complete below method */
        
        int sumOfLeafNodes(Node *root ){
            if(!root) return 0;
            if(!root->left and !root->right) return root->data;
            return sumOfLeafNodes(root->left) + sumOfLeafNodes(root->right);
        }
};