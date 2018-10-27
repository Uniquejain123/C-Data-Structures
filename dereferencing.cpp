#include<iostream>
using namespace std;


int main(){

	int x=10;
	char c='A';

	int *ptr = &x;
	char *ptr2 = &c;

	cout<<ptr<<endl;
	cout<<(void *)ptr2<<endl<<endl;
    //Explicit Typecasting to void * so that cout treats char address
	cout<<sizeof(void *)<<endl;

	cout<<sizeof(x)<<endl;
	cout<<sizeof(c)<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(ptr2)<<endl;


	return 0;
}