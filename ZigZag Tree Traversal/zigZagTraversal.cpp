//User function Template for C++
/*Structure of the node of the binary tree is as
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
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> traversal;
    	if(!root){
    	    return {};
    	}
        bool flag = false;
    	queue<Node*> q;
    	q.push(root);
    // 	q.push_back(nullptr);
    	
    	while(!q.empty()){
    	   int size = q.size();
    	   vector<int> curPath;
    	   
    	   for(int i=0;i<size;i++){
    	       Node* ptr = q.front();
    	       q.pop();
    	       
    	       curPath.push_back(ptr->data);
    	       
    	       if(ptr->left) q.push(ptr->left);
    	       if(ptr->right) q.push(ptr->right);
    	   }
    	   if(flag){
    	       reverse(curPath.begin(),curPath.end());
    	   }
    	   traversal.insert(traversal.end(), curPath.begin(), curPath.end());
    	   
    	   flag = !flag;
    	    
    	}
    	
    	return traversal;

    }

};