#include<iostream>
using namespace std;

class Node 
{ 
public:
	int data; 
	Node *next; 

	Node(int d) {
		data = d;
		next = NULL;
	}
};

Node* appendLL(Node* head,int n){
    if ((!head) || (!head->next) || n<=0){
        return head;
    }

    Node * curr(head),*curr2(head), *prev(NULL);
    int i(1);

    while(curr->next){
        if (i<n){
        	i++;
        }
        else{
            prev= curr2;
            curr2= curr2->next;
        }
        curr=curr->next;
    }
    if (i<n){
        return head;
    }
    prev->next=NULL;
    curr->next=head;
    head=curr2;
    return head;
}

void insertATHead(Node *&head, int data) {
	Node *new_node = new Node(data);
	new_node->next = head;
	head = new_node;
}

void insertAtTail(Node *&head, int data) {
	if(head == NULL) {
		insertATHead(head, data);
		return;
	}
	Node *temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	Node *new_node = new Node(data);
	temp->next = new_node;
	return;
} 

void printList(Node *node) 
{ 
	while (node!=NULL) 
	{ 
		cout<<node->data<<" "; 
		node = node->next; 
	}
	cout<<endl;
} 

int main() 
{
	Node* head = NULL;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		insertAtTail(head,x);
	}

	int k;
	cin>>k;

	appendLL(head,k); 

	printList(head); 

	return 0; 
}