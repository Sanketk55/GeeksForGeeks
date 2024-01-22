//User function Template for C++

/*// A Tree node
struct Node
{
	int key;
	struct Node *left, *right;
};*/

class Solution
{
    public:
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<int>ds;
        vector<vector<int>>paths;
        
        function <void(Node*, int)> dfs =[&]( Node* node, int curSum){
            if(!node){
                return ;
            }
            curSum += node->key;
            ds.push_back(node->key);
            
            if(curSum == sum) paths.push_back(ds);
            
            dfs(node->left, curSum);
            dfs(node->right, curSum);
            
            curSum += node->key;
            ds.pop_back();
        };
        dfs(root, 0);
        return paths;
    }
};