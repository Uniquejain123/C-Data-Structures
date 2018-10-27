#include<iostream>
using namespace std;


int main(){
    
    //Linear Search
	int arr[4][4]={{1,2,3,4},{11,14,15,16},{21,24,27,28},{31,33,34,37}};
	int key=27;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j] == key){
				cout<<i<<","<<j;
				return 0;
			}
		}
	}

	//Optimised Approach
	for(int i=0;i<3;){
		for(int j=3;j<=0;){
			if(arr[i][j] == key){
				cout<<i<<","<<j;
				return 0;
			}
			else if(arr[i][j] > key){
				j--;
			}
			else{
				i++;
			}
		}
	}
	
	return 0;
}