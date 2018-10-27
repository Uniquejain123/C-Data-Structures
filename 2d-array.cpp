#include<iostream>
using namespace std;


int main(){

	//2d array initialisation
	int arr[3][2];
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	//Print 2d array
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}
	return 0;
}