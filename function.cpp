#include<iostream>
using namespace std;

int square(int n){
	int sq=n*n;
	return sq;
}

int factorial(int n){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*i;
	}
	return ans;
}

void fun(){
	cout<<"Hello World!";
}

int main(){

	cout<<square(5); //Function call

	fun();

	int no;
	cin>>no;
	cout<<factorial(no)<<endl; //Function Call

	return 0;
}