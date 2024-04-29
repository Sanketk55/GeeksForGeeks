/* Link list Node 

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      if(K==1) return nullptr;
      
      Node* cur = head->next;
      Node* prev = head;
      int nodeNum = 1;
      
      while(cur){
          nodeNum++;
          if(nodeNum%K == 0){
              prev->next = cur->next;
              free(cur);
              cur = prev;
          }
          prev = cur;
          cur = cur->next;
      }
      return head;
    }
};