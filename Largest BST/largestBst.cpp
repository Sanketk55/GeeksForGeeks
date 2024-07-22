/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/
class NodeValue {
public:
    int maxNode, minNode, maxSize;
    
    NodeValue(int minNode, int maxNode, int maxSize) {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};

class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
     NodeValue largestBSTSubtreeHelper(Node* root) {
        // An empty tree is a BST of size 0
        if (!root) {
            return NodeValue(INT_MAX, INT_MIN, 0);
        }
        
        auto left = largestBSTSubtreeHelper(root->left);
        auto right = largestBSTSubtreeHelper(root->right);

        if (left.maxNode < root->data && root->data < right.minNode) {
            // It is a BST, update the values for the current tree
            return NodeValue(min(root->data, left.minNode),
                max(root->data, right.maxNode), left.maxSize + right.maxSize + 1);
        }

        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }

    int largestBst(Node *root)
    {
    	//Your code here
    	return largestBSTSubtreeHelper(root).maxSize;
    }
};