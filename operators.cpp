#include<iostream>
using namespace std;


int main(){

	//++ Post/Pre Increment

	int a=10;
	cout<<a++ <<endl; //10 Post
	cout<<++a <<endl; //12 Pre

	//Compound Assignment Operator

	a+=1;
	a*=5;
	a%=2; //a=a%2
	a/=2; //a=a/2

	//Ternary Operator condition ? ______:______

	5>0 ? cout<<"Greater"<<endl : cout<<"Lesser"<<endl;

    int x;
    cin>>x;

    x%2==0 ? cout<<"Even" : cout<<"Odd";

    //Ternary + Assignment

    int y = x%2 ? x/2 : x*x;
    cout<<endl<<y <<endl;

    return 0;
}