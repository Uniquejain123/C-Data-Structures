#include<iostream>
using namespace std;

void bubbleSort(int *a,int n){
	if(n==0 || n==1){
		return;
	}
	//Loop
	for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	bubbleSort(a,n-1);
}

void bubbleSortRec(int *a,int n,int j){
	if(n==0 || n==1){
		return;
	}
	if(j==n-1){
	    bubbleSortRec(a,n-1,0);
	    return; //mandatory
	}
	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}
	bubbleSortRec(a,n-1,j+1);
	return; //optional
}

int main(){

	int a[]={1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);

	bubbleSortRec(a,n,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	return 0;
}