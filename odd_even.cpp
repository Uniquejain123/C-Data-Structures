#include<iostream>
using namespace std;

void oddEven(int n){
	if(n<0){
		return;
	}
	if(n%2!=0){
		cout<<n<<endl;
	}
	oddEven(n-1);
	if(n%2==0){
		cout<<n<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	oddEven(n);
	return 0;
}