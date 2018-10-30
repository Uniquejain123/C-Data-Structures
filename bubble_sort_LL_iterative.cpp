#include<iostream>
using namespace std;

/* structure for a node */
class Node 
{
public:
	int data; 
	Node *next; 
}; 

/* Function to insert a node at the beginning of a linked list */
void insertAtTheBegin(Node **start_ref, int data); 

/* Function to bubble sort the given linked list */
void bubbleSort(Node *start); 

/* Function to swap data of two nodes a and b*/
void swap(Node *a, Node *b); 

/* Function to print nodes in a given linked list */
void printList(Node *start); 

int main() 
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	int list_size, i; 

	/* start with empty linked list */
	Node *start = NULL; 

	for (i=0; i<n; i++){
		insertAtTheBegin(&start, arr[i]); 
	}
	bubbleSort(start);

	printList(start); 

	return 0; 
} 


/* Function to insert a node at the beginning of a linked list */
void insertAtTheBegin(Node **start_ref, int data) 
{ 
	struct Node *ptr1 = (Node*)malloc(sizeof(Node)); 
	ptr1->data = data; 
	ptr1->next = *start_ref; 
	*start_ref = ptr1; 
} 

/* Function to print nodes in a given linked list */
void printList(Node *start) 
{ 
	Node *temp = start; 
	while (temp!=NULL) 
	{ 
		cout<<temp->data<<" "; 
		temp = temp->next; 
	}
	cout<<endl; 
} 

/* Bubble sort the given linked list */
void bubbleSort(Node *start) 
{ 
	int swapped, i; 
	Node *ptr1; 
	Node *lptr = NULL; 

	/* Checking for empty list */
	if (start == NULL) 
		return; 

	do
	{ 
		swapped = 0; 
		ptr1 = start; 

		while (ptr1->next != lptr) 
		{ 
			if (ptr1->data > ptr1->next->data) 
			{ 
				swap(ptr1, ptr1->next); 
				swapped = 1; 
			} 
			ptr1 = ptr1->next; 
		} 
		lptr = ptr1; 
	} 
	while (swapped); 
} 

/* function to swap data of two nodes a and b*/
void swap(Node *a, Node *b) 
{ 
	int temp = a->data; 
	a->data = b->data; 
	b->data = temp; 
} 
