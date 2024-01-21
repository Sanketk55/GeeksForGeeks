//User function Template for C++

/*
struct Node {
	int key;
	Node *left, *right;
};
*/

class Solution
{
    private:
    int distribution(Node* root,int &moves){
        if(!root) return 0;
        int leftSol=distribution(root->left,moves);
        int rightSol=distribution(root->right,moves);
        
        moves += abs(leftSol) + abs(rightSol);
        return root->key-1 + leftSol + rightSol; 
    }
    public:
    int distributeCandy(Node* root)
    {
        //code here
        int moves=0;
        distribution(root,moves);
        return moves;
    }
};