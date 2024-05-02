/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


class Solution
{
    // private:
    // vector<int> tree;
    // int index;
    
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void getTree(Node* node, vector<int> &tree){
        if(node == nullptr){
            tree.push_back(-1);
            return;
        }
        tree.push_back(node->data);
        getTree(node->left, tree);
        getTree(node->right, tree);
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> tree;
        getTree(root, tree);
        return tree;
    }
    
    //Function to deserialize a list and construct the tree.
    Node* makeTree(vector<int> &A, int &index){
        if(index == A.size()) return nullptr;
        
        int val = A[index];
        index++;
        if(val==-1) return nullptr;
        
        Node* root = new Node(val);
        root->left = makeTree(A, index);
        root->right = makeTree(A, index);
        
        
        return root;
    }
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       int index = 0;
       return makeTree(A, index);
    }

};