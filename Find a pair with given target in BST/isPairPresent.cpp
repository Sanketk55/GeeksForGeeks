/*Complete the function below
Node is as follows
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
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target){
    //add code here.
        unordered_map<int,int> mp;
        
        function<bool(struct Node*)>dfs = [&](struct Node* node){
            if(!node) return false;
            if(mp.find(target - node->data)!=mp.end()) return true;
            mp[node->data]++;
            return dfs(node->left) || dfs(node->right);
        };
        return dfs(root) ? 1 : 0;
    }
};