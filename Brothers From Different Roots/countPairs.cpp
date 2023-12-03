//User function Template for C++

/*Structure of the Node of the BST is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
    
private:
    void dfs(Node* node, unordered_map<int,int>& mp){
        if(node==nullptr){
            return;
        }
        mp[node->data]=1;
        dfs(node->left, mp);
        dfs(node->right, mp);
    }
public:
    int countPairs(Node* root1, Node* root2, int x)
    {
        int pairs=0;
        unordered_map<int,int>mp;
        
        dfs(root1, mp);
        
        function<void(Node*)> help=[&](Node* node){
            if(node==nullptr){
                return;
            }
            int val=x-node->data;
            if(mp.find(val)!=mp.end()){
                pairs++;
                mp[val]--;
            }
            help(node->left);
            help(node->right);

        };
        help(root2);
        
        return pairs;
        

    }
};
