#include<iostream>
using namespace std;


int main(){
	
	char a[]={'a','b','c','d','e','\0'};

	char b[10]="Hello"; //String (automatically null terminated)

	cout<<sizeof(b)<<endl;

	cout<<b<<endl;

	cout<< a <<endl;


}