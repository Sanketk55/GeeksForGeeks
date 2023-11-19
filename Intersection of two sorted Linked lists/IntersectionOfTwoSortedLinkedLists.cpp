/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        unordered_map<int,int>mp;
        Node* temp=head1;
        
        while(temp){
            mp[temp->data]++;
            temp=temp->next;
        }
        temp=head2;
        Node* head3=NULL;
        Node* ptr;
        
        while(temp){
            if(mp[temp->data]>=1){
                if(head3==NULL){
                    Node* newNode=new Node(temp->data);
                    head3=newNode;
                    ptr=head3;
                }
                else{
                    Node* newNode=new Node(temp->data);
                    ptr->next=newNode;
                    ptr=ptr->next;
                }
                mp[temp->data]--;
            }
            temp=temp->next;
        }
        
        return head3;
    }
};
