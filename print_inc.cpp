#include<iostream>
using namespace std;

void printincrease(int num){
	
	if(num<1){
		return;
	}
	
	printincrease(num-1);
	cout<<num<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	printincrease(n);
	return 0;
}