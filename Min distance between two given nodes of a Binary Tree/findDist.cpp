/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* root, int a, int b) {
        // Your code here
        vector<int> curPath, pathA, pathB;
        
        function<void(Node* )> dfs = [&](Node* node){
            if(!node) return;
            curPath.push_back(node->data);
            if(node->data == a) pathA = curPath;
            if(node->data == b) pathB = curPath;
            
            dfs(node->left);
            dfs(node->right);
            
            curPath.pop_back();
        };
        dfs(root);
        
        int i=0, j=0;
        while(i < pathA.size() && j < pathB.size()){
            if(pathA[i] != pathB[j]) break;
            i++;
            j++;
        }
        
        return pathA.size() - i + pathB.size() -j;
    }
};