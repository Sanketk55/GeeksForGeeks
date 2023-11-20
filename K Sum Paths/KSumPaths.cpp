//User function template for C++

/*
struct Node 
{
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
    

    int sumK(Node *root,int k)
    {
        // code here 
        long long ans=0;
        const long long mod=1e9+7;
        unordered_map<int,int>mp;
        mp[0]=1;
        
        function<void(Node*,int)> dfs=[&](Node* node,int sum){
            if(node==NULL){
              return;
            }
            sum+=node->data;
            if(mp.find(sum-k)!=mp.end()){
                ans=(ans+mp[sum-k])%mod;
            }
            mp[sum]++;
            
            dfs(node->left,sum);
            dfs(node->right,sum);
            
            mp[sum]--;
            
            if(mp[sum]==0){
                mp.erase(sum);
            }
        };
        
        dfs(root,0);
        
        return ans;
    }
};