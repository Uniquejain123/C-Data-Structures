#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int a=0,b=1,i=0;
    long int c=0;

    //cout<<a<<'\n'<<b<<'\n';

    if(n>0 && n<=1000){
        while(i<=n+1){
		cout<<c<<endl;
		a = b;
		b = c;
		c = a+b;
		i = i + 1;
        if(c>n){
            break;
        }
	    }
    }
    else{
        cout<<"Please enter the value between 0 to 1000";
    }
	
	return 0;
}