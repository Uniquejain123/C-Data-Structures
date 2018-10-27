#include<iostream>
using namespace std;


int main(){
	int n,last_digit,even_sum=0,odd_sum=0;

	cin>>n;

	while(n>0){
		last_digit=n%10;
		if(last_digit%2==0){
			even_sum=even_sum+last_digit;
		}
		else{
			odd_sum=odd_sum+last_digit;
		}
		n=n/10;
	}
	cout<<even_sum<<endl;
	cout<<odd_sum<<endl;
	return 0;
}