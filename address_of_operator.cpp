#include<iostream>
using namespace std;


int main(){

	int x=10;

	cout<< &x <<endl;

	float y=10.5;
	cout<< &y  <<endl;

	//& bucket gives us the address of that bucket

	// Pointer Variable - is variable that stores address of another variable
	// Datatype ?

	int *p;
	int **z;
	p = &x;
	z=&p;
	
	cout<<z<<endl;

	cout<<endl<<p<<endl;
	cout<<&x<<endl;
	cout<<x<<endl;
	cout<<&p<<endl;


	return 0;
}