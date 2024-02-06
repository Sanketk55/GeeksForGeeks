//Node Structure
/*struct NodeGiven a binary tree with n nodes and a non-negative integer k, the task is to count the number of special nodes. A node is considered special if there exists at least one leaf in its subtree such that the distance between the node and leaf is exactly k.
{
	int data;
	Node *left, *right;
};*/

class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here. 
    	unordered_set<Node*> s;
    	vector<Node*>path;
    	
    	function<void(Node*, int)>help = [&](Node* node, int level){
    	    if(!node) return;
    	    if(!node->left and !node->right){
    	        if(k==0){
    	            s.insert(node);
    	        }
    	        else if(level - k >= 0){
    	            s.insert(path[level - k]);
    	        }
    	        return;
    	    }
    	    path.push_back(node);
    	    help(node->left, level+1);
    	    help(node->right, level+1);
    	    path.pop_back();
    	};
    	
    	help(root, 0);
    	return s.size();
    }
};
