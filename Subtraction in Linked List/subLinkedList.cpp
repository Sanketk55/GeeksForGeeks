//User function Template for C++

class Solution {
private:
    int getSize(Node* node){
        int size=0;
        
        while(node){
            node=node->next;
            size++;
        }
        return size;
    }
    
    Node* getReverse(Node* cur){
        Node* pre = nullptr;
        Node* curNext = nullptr;
        
        while(cur){
            curNext = cur->next;
            cur->next = pre;
            pre = cur;
            cur = curNext;
        }
        return pre;
    }
    int findGreater(Node *head1,Node *head2){
        if(!head1 and !head2)return 0;
        if(head1->data>head2->data)return 1;
        if(head2->data>head1->data)return 2;
        return findGreater(head1->next,head2->next);
    }
    
public:
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        
        // dealing with leading zero's
        Node *ans=new Node(0);
        
        while(head1 and head1->data==0)head1=head1->next;
        while(head2 and head2->data==0)head2=head2->next;
        
        if(!head1 and !head2)return ans;
        if(!head1)return head2;
        if(!head2)return head1;
        
        Node *greater=head1,*less=head2;
        if(getSize(head2)>getSize(head1)){
            greater=head2;
            less=head1;
        }
        else if(getSize(head1)==getSize(head2)){
            if(findGreater(head1,head2)==2){
                greater=head2;
                less=head1;
            }
            else if(findGreater(head1,head2)==0){
                return ans;
            }
        }
        
        greater=getReverse(greater);
        less=getReverse(less);
        Node *temp=ans;
        
        while(less){
            if(greater->data>=less->data){
                temp->next=new Node(greater->data-less->data);
            }
            else{
                temp->next = new Node(greater->data+10-less->data);
                Node *nxt = greater->next;
                while(nxt->data==0){
                    nxt->data=9;
                    nxt=nxt->next;
                }
                nxt->data=nxt->data-1;
            }
            greater=greater->next;
            less=less->next;
            temp=temp->next;
        }
        
        while(greater){
            temp->next=new Node(greater->data);
            temp=temp->next;
            greater=greater->next;
        }
        
        ans = getReverse(ans->next);
        while(ans and ans->data==0)ans=ans->next;
        return ans;
    }
};