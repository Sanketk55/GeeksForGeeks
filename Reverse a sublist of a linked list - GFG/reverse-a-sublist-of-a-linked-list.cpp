//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


// } Driver Code Ends
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
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
         Node* dummyNode=new Node(0);
        dummyNode->next=head;

        Node* leftPre=dummyNode;
        Node* curNode=head;
        for(int i=0;i<m-1;i++){
            leftPre=leftPre->next;
            curNode=curNode->next;
        }
        Node* subListHead=curNode;

        Node* preNode=NULL;
        Node* nextNode=NULL;
        
        for(int i=0;i<n-m+1;i++){
            nextNode=curNode->next;
            curNode->next=preNode;
            preNode=curNode;
            curNode=nextNode;
        }
        leftPre->next=preNode;
        subListHead->next=curNode;

        return dummyNode->next;

    }
};

//{ Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}

// } Driver Code Ends