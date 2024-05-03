/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
    public:
    // function should print the nodes at k distance from root
    void dfs(Node* node, int k, vector<int> &treeNodes){
        if(!node) return;
        if(k==0){
            treeNodes.push_back(node->data);
            return;
        }

        dfs(node->left, k-1, treeNodes);
   
        dfs(node->right, k-1, treeNodes);
    }
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int> treeNodes;
      dfs(root, k, treeNodes);
      
      return treeNodes;
    }
};