/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution
{
    public:
    int absolute_diff(Node *root)
    {
        //Your code here
        int minDiff =INT_MAX, previous =-1;
        
        function<void(Node* ) > dfs = [&](Node* node){
            if(!node) return;
            
            dfs(node->left);
            if(previous!=-1){
                minDiff = min(minDiff, abs(node->data - previous));
            }
            previous = node->data;
            
            dfs(node->right);
        };
        
        dfs(root);
        return minDiff;
    }
};