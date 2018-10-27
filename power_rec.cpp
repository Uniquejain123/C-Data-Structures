#include<iostream>
using namespace std;

int Power(int x,int n){

	if(n==0){
		return 1;
	}

	return Power(x,n-1)*x;
}

int powerfast(int x,int n){
	if(n==0){
		return 1;
	}

	int smallPower = powerfast(x,n/2);
	smallPower=smallPower*smallPower;
	//Even
	if(n%2==0){
		return smallPower;
	}
	//Odd
	return x*smallPower;
}

int main(int argc, char const *argv[])
{
	int x;
	int n;
	cin>>x>>n;
	cout<<Power(x,n)<<endl;
	cout<<powerfast(x,n)<<endl;
	return 0;
}