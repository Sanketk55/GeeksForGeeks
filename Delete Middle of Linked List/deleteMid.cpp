/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        // Your Code
        if(head->next == nullptr) return nullptr;
        
        Node* fast = head;
        Node* prevSlow ;
        Node* slow = head;
        
        while(fast->next && fast->next->next){
            prevSlow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next != nullptr) slow->next = slow->next->next;
            // return ;
        else prevSlow->next = slow->next;
        
        return head;
        
        

        
        
        
        
        
        
        
    }
};