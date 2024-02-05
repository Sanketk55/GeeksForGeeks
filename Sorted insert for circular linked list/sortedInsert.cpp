/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       Node* node = new Node(data);
       
       if(head==nullptr){
           node->next = node;
           return node;
       } 
       
       Node* first = nullptr, *second = head;
       
       do{
           first = second;
           second = second->next;
           if(data >= first->data && data <= second->data) break;
           
       }while(second != head);
       
       first->next = node;
       node->next = second;
       
       if(head->data > data) return first->next;
       return head;
    }
};