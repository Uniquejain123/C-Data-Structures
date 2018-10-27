#include<iostream>
using namespace std;

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

bool cycleDetect(Node *head){

	if(head == NULL && head->next == NULL){
		return head;
	}

	Node *slow = head;
	Node *fast = head;
	while(fast!=NULL && fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
		if(fast == slow){
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}