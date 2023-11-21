/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


   
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        function<bool(Node*,Node*)> dfs=[&](Node* r1,Node* r2){
            if(!r1 || !r2){
                return r1==r2;
            }
            if(r1->data!=r2->data){
                return false;
            }
            
            return dfs(r1->left, r2->left) && dfs(r1->right,r2->right);
            
        };
        
        return dfs(r1,r2);
    }
};