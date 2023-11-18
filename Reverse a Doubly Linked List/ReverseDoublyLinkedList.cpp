/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        if( !head or !head->next ){
            return head;
        }
        
        Node* p=NULL;
        Node* curr=head;
        Node* q;
        
        while(curr){
            q=curr->next;
            curr->next=p;
            curr->prev=q;
            
            p=curr;
            curr=q;
        }
        return p;
    }
};
