//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        struct Node* node=head_ref;
        while(node){
            struct Node* ptr=head_ref;
            while(ptr!=node){
                if(node->data <= ptr->data){
                    swap(node->data,ptr->data);
                }
                ptr=ptr->next;
            }
            node=node->next;
        }
        return head_ref;
    }
    
};