/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node* node){
        Node* prev = nullptr;
        Node* cur = node;
        Node* cur_next;
        
        while(cur){
            cur_next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = cur_next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        while(num1 && num1->data == 0) num1 = num1->next;
        while(num2 && num2->data == 0) num2 = num2->next;
    
        // Node* add = ;
        if(num1 == nullptr && num2 == nullptr) return new Node(0);
        
        if(num1 == nullptr) return num2;
        if(num2 == nullptr) return num1;
        
        Node* head1 = reverse(num1);
        Node* head2 = reverse(num2);
        
        Node* head = new Node(-1);
        Node* tail = head;
        int rem = 0;
        
        while(head1 || head2 || rem){
            // int sum = head1->data + head2->data + rem;
            int n1 = head1 == nullptr ? 0 : head1->data;
            int n2 = head2 == nullptr ? 0 : head2->data;
            int sum = n1 + n2 + rem;
            rem = sum/10;
             
            tail->next = new Node(sum%10); 
            tail = tail->next;
            
            if(head1) head1 = head1->next;
            if(head2) head2 = head2->next;
        }

        
        return reverse(head->next);
        
        
    }
};