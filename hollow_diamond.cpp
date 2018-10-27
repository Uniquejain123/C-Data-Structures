#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int i=1,j,k,c;
	k=(n+1)/2;
	c=n-k;
	while(i<=k){

		//left
		j=1;
		while(j<=k-i){
			cout<<"*";
			j++;
		}

		//Spaces
		j=1;
		while(j<=2*i-1){
			cout<<" ";
			j++;
		}

		//Right
		j=1;
		while(j<=k-i){
			cout<<"*";
			j++;
		}

		//Shift to the new line
		cout<<endl;
		i++;
	}

	//Lower Part
	i=c;
	while(i>0){
		//left
		j = (c-i)+1;
		while(j){
			cout<<"*";
			j--;
		}
		//Spaces
		j=1;
		while(j<=2*i-1){
			cout<<" ";
			j++;
		}
		//Right
        j = (c-i)+1;
		while(j){
			cout<<"*";
			j--;
		}
		cout<<endl;
		i--;
	}

	return 0;
}