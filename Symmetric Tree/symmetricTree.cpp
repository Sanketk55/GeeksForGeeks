/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    function<bool(struct Node*,struct Node*)> dfs= [&](struct Node* node1, struct Node* node2){
	        if(node1==nullptr || node2==nullptr){
	            return node1==node2;
	        }
	        if(node1->data != node2->data){
	            return false;
	        }
	        return dfs(node1->left, node2->right) && dfs(node1->right, node2->left);

	    };
	    
	    return root==nullptr || dfs(root->left, root->right);
	    
    }
};