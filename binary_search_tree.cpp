#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

//-----Binary Search Tree

node* insertInBST(node*root,int d){
	if(root == NULL){
		return new node(d);
	}

	//Rec Case
	if(d<root->data){
		root->left = insertInBST(root->left,d);
	}
	else{
		root->right = insertInBST(root->right,d);
	}
	return root;
}

node *buildBST(){
	//Read the input
	int d;
	cin>>d;
	node*root = NULL;
	while(d!=-1){
		root = insertInBST(root,d);
		cin>>d;
	}
	return root;
}

bool search(node*root,int key){
	if(root==NULL){
		return false;
	}
	if(root->data==key){
		return true;
	}
	if(key<root->data){
		return search(root->left,key);
	}
	return search(root->right,key);
}

void printPre(node *root){
	if(root == NULL){
		return;
	}
  	cout<<root->data<<" ";
	printPre(root->left);
	printPre(root->right);
}

void printIn(node *root){
	if(root == NULL){
		return;
	}
	printIn(root->left);
	cout<<root->data<<" ";
	printIn(root->right);
}

void printPost(node *root){
	if(root == NULL){
		return;
	}
	printPost(root->left);
	printPost(root->right);
	cout<<root->data<<" ";
}

void printLevelOrder(node*root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* f = q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<f->data<<" ";
			q.pop();
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}
	}
}

node* buildLevelOrder(){

	node*root;
	int d;
	cin>>d;

	root = new node(d);
	queue<node*> q;

	q.push(root);

	while(!q.empty()){

		node* f = q.front();
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			f->left = new node(c1);
			q.push(f->left);
		}
		if(c2!=-1){
			f->right = new node(c2);
			q.push(f->right);
		}
		q.pop();
	}
	return root;
}

node*deleteFromBST(node*root,int key){
	if(root==NULL){
		return root;
	}
	if(key<root->data){
		root->left = deleteFromBST(root->left,key);
		return root;
	}
	else if(key>root->data){
		root->right = deleteFromBST(root->right,key);
		return root;
	}
	else{
		if(key==root->data){
			if(root->left==NULL && root->right==NULL){
				delete root;
				return NULL;
			}
			else if(root->left==NULL && root->right!=NULL){
				node*temp=root->right;
				delete root;
				return NULL;
			}
			else if(root->left!=NULL && root->right==NULL){
				node*temp=root->left;
				delete root;
				return NULL;
			}
			else{
				node* nextBig=root->right;

				while(nextBig->left!=NULL){
					nextBig=nextBig->left;
				}
				root->data=nextBig->data;
				root->right=deleteFromBST(root->right,root->data);
				return root;
			}
		}
	}
}

node* buildFromArray(int a[],int s,int e){
	if(s>e){
		return NULL;
	}
	int mid = (s+e)/2;

	node*root = new node(a[mid]);
	root->left = buildFromArray(a,s,mid-1);
	root->right = buildFromArray(a,mid+1,e);
}

class Pair{
public:
	node*head;
	node*tail;
};

Pair flattenLL(node*root){
	Pair p;
	if(root==NULL){
		p.head = p.tail = NULL;
		return p;
	}
	if(root->left==NULL && root->right==NULL){
		p.head = p.tail = root;
		return p;
	}
	else if(root->left!=NULL && root->right==NULL){
		Pair leftLL = flattenLL(root->left);
		leftLL.tail->right = root;
		p.head = leftLL.head;
		p.tail = root;
		return p;
	}
	else if(root->left==NULL && root->right!=NULL){
		Pair rightLL = flattenLL(root->right);
		root->right = rightLL.head;
		p.head = root;
		p.tail = rightLL.tail;
		return p;
	}
	else{
		Pair leftLL = flattenLL(root->left);
		Pair rightLL = flattenLL(root->right);
		leftLL.tail->right = root;
		root->right = rightLL.head;
		p.head = leftLL.head;
		p.tail = rightLL.tail;
		return p;
	}
}

int main(int argc, char const *argv[])
{
	node*root = buildBST();

	/*int key;
	cin>>key;
	root = deleteFromBST(root,key);

	printPre(root);
	cout<<endl;
	printIn(root);
	cout<<endl;
	printPost(root);
	cout<<endl;
	cout<<search(root,6)<<endl;*/

	Pair linkedlist = flattenLL(root);
	node*temp = linkedlist.head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp = temp->right;
	}
	cout<<"NULL"<<endl;;

	return 0;
}