#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int d){
		data = d;
		left = right = NULL;
	}
};

class Info{
	int size;
	int max;
	int min;
	int ans;
	bool isBST;

};

Info largestBST(Node*root){

	if(root==NULL){
		return{0,INT8_MAX,INT8_MIN,0,true};
	}
	if(root->left==NULL && root->right==NULL){
		return{1,root->data,root->data,1,true};
	}

	Info l = largestBST(root->left);
	Info r = largestBST(root->right);

	Info ; 
    ret.size = (1 + l.size + r.size); 

    if (l.isBST && r.isBST && l.max < root->data && 
            r.min > root->data) 
    { 
        ret.min = min(l.min, min(r.min, root->data)); 
        ret.max = max(r.max, max(l.max, root->data)); 

        ret.ans = ret.size; 
        ret.isBST = true; 
  
        return ret; 
    }

    ret.ans = max(l.ans, r.ans); 
    ret.isBST = false; 
  
    return ret; 
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

int main(int argc, char const *argv[])
{
	Node *root = newNode(60);
	root->left = newNode(65);
	root->right = newNode(70);
	root->left->left = newNode(50);
	cout<<largestBST(root)<<endl;

	return 0;
}