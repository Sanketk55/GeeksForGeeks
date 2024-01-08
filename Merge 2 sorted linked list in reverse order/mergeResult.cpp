/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node* node3=nullptr;
        Node* ptr;
        
        while(node1 && node2){
            if(node1->data <= node2->data){
                ptr=node1;
                node1=node1->next;
            }
            else{
                ptr=node2;
                node2=node2->next;
            }
            
            ptr->next=node3;
            node3=ptr;
        }
        
        while(node1){
            ptr=node1;
            node1=node1->next;
            ptr->next=node3;
            node3=ptr;
            
        }
        while(node2){
            ptr=node2;
            node2=node2->next;
            ptr->next=node3;
            node3=ptr;
        }

        return node3;
        
    }  
};