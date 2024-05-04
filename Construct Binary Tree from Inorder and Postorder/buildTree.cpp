/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:

    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        int postInd = n-1;
        
        function<Node* (int , int)> dfs = [&](int is, int ie) -> Node*{
            if(is > ie) return nullptr;
            
            Node* root = new Node(post[postInd--]);
            
            int inInd = ie;
            for(int i = is; i<=ie; i++){
                if(in[i] == root->data){
                    inInd = i;
                    break;
                }
            }
            root->right = dfs(inInd+1, ie);
            root->left = dfs(is, inInd-1);
            
            return root;
            
        };
        
        return dfs(0, n-1);
    }
};