#include <iostream>
using namespace std;

void display(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int *arr = new int[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	display(arr,n);
	delete [] arr;
	return 0;
}