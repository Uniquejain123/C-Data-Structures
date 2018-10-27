#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int i=1,j,k,c;
	k=(n+1)/2;
	c=n-k;
	while(i<=k){

		//Spaces
		j=1;
		while(j<=k-i){
			cout<<'\t';
			j++;
		}

		//Stars
		j=1;
		while(j<=2*i-1){
			cout<<"*"<<'\t';
			j++;
		}

		//Shift to the new line
		cout<<endl;
		i++;
	}

	//Lower Part
	i=c;
	while(i>0){
		//Spaces
		j = (c-i)+1;
		while(j){
			cout<<'\t';
			j--;
		}
		//Stars
		j=1;
		while(j<=2*i-1){
			cout<<"*"<<'\t';
			j++;
		}

		cout<<endl;
		i--;
	}

	return 0;
}