#include<iostream>
using namespace std;

void printdecrease(int num){
	
	if(num<1){
		return;
	}
	cout<<num<<endl;
	printdecrease(num-1);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	printdecrease(n);
	return 0;
}