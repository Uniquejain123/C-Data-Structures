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

void removeLoop(Node *, Node *); 

bool cycleDetect(Node *head) {
		if(head == NULL or head->next == NULL) {
			return head;
		}

		Node *slow = head;
		Node *fast = head;
		while(fast!= NULL and fast->next!=NULL) {
			fast = fast->next->next;
			slow = slow->next;
			if(slow==fast) {
				return true;
			}
		}	
		return false;
	}

void removeLoop(Node *loop_node, Node *head){

	Node *ptr1; 
	Node *ptr2; 

	ptr1 = head; 
	while(true){
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

void printList(Node *node){

	while (node != NULL) 
	{ 
		cout<<node->data<<" "; 
		node = node->next; 
	}
	cout<<endl;
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

int main() 
{
	Node *head = NULL;

	int x;
	while(x!=-1){
		cin>>x;
		insertAtTail(head,x);
	} 

	detectAndRemoveLoop(head);

	printList(head); 
	return 0; 
}