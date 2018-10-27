#include<iostream>
using namespace std;


int main(){

	int x=10;
	int *ptr=&x;

	cout<<x<<endl;  //10
	cout<<&x<<endl; //0x61fecc
	cout<<ptr<<endl; //0x61fecc
	cout<<*ptr<<endl; //10
	cout<<&ptr<<endl; //0x61fec8
	cout<<*&x<<endl; //10
	cout<<&(*ptr)<<endl; //0x61fecc
	cout<<*(&ptr)<<endl; //0x61fecc

	return 0;
}