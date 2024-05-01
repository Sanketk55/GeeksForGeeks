/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/

class Solution
{
    public:
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
    struct Node* arrangeCV(Node *head)
    {
       //Code here
       unordered_set<char> st{'a','e','i','u','o'};
       Node* vowel = new Node('1');
       Node* consonent = new Node('1');
       consonent->next = head;
       
       Node* ptr1 = vowel;
       Node* prev = consonent;

       Node* ptr2 = head;
       
       while(ptr2){
           if(st.find(ptr2->data) != st.end()){
               ptr1->next = ptr2;
               ptr1 = ptr1->next;
               
               prev->next = ptr2->next;
               ptr2 = prev->next;
               
           }
           else{
               prev = ptr2;
               ptr2 = ptr2->next;
           }
       }
       
       ptr1->next = consonent->next;
       
       return vowel->next;
    }
};