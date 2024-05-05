/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/
class Solution{
  public:
    void dfs(Node* node, unordered_map<int, int> &mp, int vLevel, int &mini, int &maxi){
        if(!node) return;
        
        mini = min(vLevel, mini);
        maxi = max(vLevel, maxi);
        
        mp[vLevel]+=node->data;
        
        dfs(node->left, mp, vLevel-1, mini, maxi);
        dfs(node->right, mp, vLevel+1, mini, maxi);
    }
    vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> sum;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        unordered_map<int, int> mp;
        dfs(root, mp, 0, mini, maxi);
        
        for(int i=mini;i<=maxi;i++){
            if(mp[i]) sum.push_back(mp[i]);
        }
        return sum;
    }
};