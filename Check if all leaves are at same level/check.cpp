/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/

    bool check(Node *root)
    {
        //Your code here
        unordered_set<int> s;
        
        function<void(Node* , int)>dfs = [&](Node* node, int depth){
            if(!node) return ;
            
            dfs(node->left, depth+1);
            dfs(node->right, depth+1);
            if(!node->left and !node->right) s.insert(depth);
        };
        
        dfs(root, 0);
        return s.size()==1;
    }
};