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
} 

Node *newNode(int key) 
{ 
	Node *temp = (Node*)malloc(sizeof(Node)); 
	temp->data = key; 
	temp->next = NULL; 
	return temp; 
} 

int main() 
{
	Node *head = newNode(1); 
    head->next = newNode(2); 
    head->next->next = newNode(3); 
    head->next->next->next = newNode(4); 
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(2);
    head->next->next->next->next->next->next = newNode(3);

	detectAndRemoveLoop(head);

	printList(head); 
	return 0; 
} 