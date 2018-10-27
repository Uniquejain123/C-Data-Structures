#include<iostream>
using namespace std;

int fibonacci(int n){

	if(n==0 || n==1){
		return n;
	}

	int result = fibonacci(n-1) + fibonacci(n-2);
	return result;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}