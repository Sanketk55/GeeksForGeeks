/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
private:
    bool isLeaf(Node* node){
        return !node->left && !node->right ? true : false;
    }
    void addLeftBoundary(Node* node, vector<int> &result){
        
        while(node){
            if(!isLeaf(node)){
                result.push_back(node->data);
            }
            if(node->left) node = node->left;
            else node = node->right;
        }
    }
    void addRightBoundary(Node* node, vector<int> &result){
        stack<int> s;
        
        while(node){
            if(!isLeaf(node)){
                s.push(node->data);
            }
            if(node->right) node = node->right;
            else node = node->left;
        }
        
        while(!s.empty()){
            result.push_back(s.top());
            s.pop();
        }
        
    }
    
    void addLeafNodes(Node* node, vector<int> &result){
        if(!node) return;
        if(isLeaf(node)){
            result.push_back(node->data);
        }
        addLeafNodes(node->left, result);
        addLeafNodes(node->right, result);
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> result;
        
        if(!root) return result;
        result.push_back(root->data);
        if(isLeaf(root)) return result;
        
        addLeftBoundary(root->left, result);
        addLeafNodes(root, result);
        addRightBoundary(root->right, result);
        
        return result;
    }
};