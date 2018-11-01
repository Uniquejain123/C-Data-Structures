#include<iostream>
using namespace std; 

class Node 
{
public:
	int data; 
	Node* next;

	Node(int d) {
		data = d;
		next = NULL;
	}
}; 

Node *reverse (Node *head, int k) 
{ 
	Node* current = head; 
	Node* next = NULL; 
	Node* prev = NULL; 
	int count = 0; 

	while (current != NULL && count < k) 
	{ 
		next = current->next; 
		current->next = prev; 
		prev = current; 
		current = next; 
		count++; 
	} 

	if (next != NULL){
		head->next = reverse(next, k); 
	}

	return prev; 
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
	while (node != NULL) 
	{ 
		cout<<node->data<<" "; 
		node = node->next; 
	}
	cout<<endl; 
}

int main(void) 
{
	Node* head = NULL; 

	int n,k;
	cin>>n>>k;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		insertAtTail(head,x);
	}

	head = reverse(head, k);

	printList(head); 

	return(0); 
} 