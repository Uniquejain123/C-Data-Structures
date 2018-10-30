#include<iostream>
using namespace std;

class Node 
{ 
public:
	int data; 
	Node *next; 
}; 

void segregateEvenOdd(Node **head_ref) 
{ 
	Node *end = *head_ref; 
	Node *prev = NULL; 
	Node *curr = *head_ref; 

	while (end->next != NULL){
		end = end->next; 
	}

	Node *new_end = end; 

	while (curr->data %2 == 0 && curr != end) 
	{ 
		new_end->next = curr; 
		curr = curr->next; 
		new_end->next->next = NULL; 
		new_end = new_end->next; 
	} 

	if (curr->data%2 != 0) 
	{
		*head_ref = curr; 

		while (curr != end) 
		{ 
			if ( (curr->data)%2 != 0 ) 
			{ 
				prev = curr; 
				curr = curr->next; 
			} 
			else
			{
				prev->next = curr->next; 
				curr->next = NULL;
				new_end->next = curr;
				new_end = curr;
				curr = prev->next; 
			} 
		} 
	}
	else{
		prev = curr;
	}

	if (new_end!=end && (end->data)%2 == 0) 
	{ 
		prev->next = end->next; 
		end->next = NULL; 
		new_end->next = end; 
	} 
	return; 
} 

void push(Node** head_ref, int new_data) 
{
	Node* new_node = (Node*) malloc(sizeof(Node)); 
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node; 
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
		push(&head,x);
	}

	segregateEvenOdd(&head); 

	printList(head); 

	return 0; 
}