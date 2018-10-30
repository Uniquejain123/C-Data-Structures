#include<iostream>
using namespace std;

class Node 
{
public:
	int data; 
	Node* next; 
}; 

void removeLoop(Node *, Node *); 

int detectAndRemoveLoop(Node *list) 
{ 
	Node *slow_p = list, *fast_p = list; 

	while (slow_p && fast_p && fast_p->next) 
	{ 
		slow_p = slow_p->next; 
		fast_p = fast_p->next->next; 

		if (slow_p == fast_p) 
		{ 
			removeLoop(slow_p, list); 
			return 1; 
		} 
	} 

	return 0; 
} 

void removeLoop(Node *loop_node, Node *head) 
{ 
	Node *ptr1; 
	Node *ptr2; 

	ptr1 = head; 
	while (1) 
	{
		ptr2 = loop_node; 
		while (ptr2->next != loop_node && ptr2->next != ptr1){
			ptr2 = ptr2->next; 
		}

		if (ptr2->next == ptr1){
			break; 
		}
		ptr1 = ptr1->next; 
	}
	ptr2->next = NULL; 
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

Node *newNode(int key) 
{ 
	Node *temp = (Node*)malloc(sizeof(Node)); 
	temp->data = key; 
	temp->next = NULL; 
	return temp; 
} 

void push(Node** head_ref, int new_data) 
{
	Node* new_node = new Node; 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
}

int main() 
{
	Node *head = NULL;

	int x;
	while(x!=-1){
		cin>>x;
		push(&head,x);
	} 

	detectAndRemoveLoop(head);

	printList(head); 
	return 0; 
} 