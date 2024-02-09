/*Complete the function below

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

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here 
     
        function<bool(Node* )> dfs  = [&](Node* node){
            int sum=0;
            if(!node || (!node->left && !node->right)) return true;
            if(node->left) sum += node->left->data;
            if(node->right) sum += node->right->data;
            return dfs(node->left) && dfs(node->right) && node->data == sum;
            
        };
        return dfs(root);
    }
};