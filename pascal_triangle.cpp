#include<iostream>
using namespace std;

//Function for Factorial
int factorial(int n){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*i;
	}
	return ans;
}

//Function for computing ncr
int binCoeff(int n,int r){
	return factorial(n)/(factorial(n-r)*factorial(r)); //Function Call for factorial
}

//Function for Pascal Triangle
void Pascal(int n){
	//n:no of rows

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<binCoeff(i,j)<<" "; //Function Call for binCoeff
		}
		cout<<endl;
	}
}

int main(){

	int n;
	cin>>n;
	Pascal(n); //Function Call for Pascal Triangle

	return 0;
}