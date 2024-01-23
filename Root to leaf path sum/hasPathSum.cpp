/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution
{
    public:
    bool dfs(Node* node, int curSum, int targetSum){
        if(!node) return false;
        curSum+=node->data;
        if(!node->left && !node->right){
            if(curSum==targetSum) return true;
            return false;
        }
        
        return dfs(node->left, curSum, targetSum) || dfs(node->right, curSum, targetSum);
    }
    bool hasPathSum(Node *root, int S) {
    // Your code here
    return dfs(root,0,S);
}
};