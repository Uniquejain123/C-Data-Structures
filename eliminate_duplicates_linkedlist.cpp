#include<iostream>
#include<cstdlib>
using namespace std;

/* Link list node */
class Node { 
public:
	int data; 
	Node* next;

	Node(int d){
		data = d;
		next = NULL;
	}
}; 

void removeDuplicates(Node* head) {

	Node* current = head; 
	Node* next_next; 

	if (current == NULL){
		return;
	}

	while(current->next != NULL){
		if(current->data == current->next->data){
			next_next = current->next->next;
			free(current->next);
			current->next = next_next;
		}
		else{
			current = current->next;
		}
	}
}

void insertAtHead(Node*&head,int data){

	Node*n = new Node(data);
	n->next = head;
	head = n;
}

void insertAtTail(Node *&head, int data) {
	if(head == NULL) {
		insertAtHead(head, data);
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

void print(Node*head){
	Node*temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	Node*head = NULL;
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		insertAtTail(head,a);
	}
	removeDuplicates(head);
	print(head);
	return 0;
}
