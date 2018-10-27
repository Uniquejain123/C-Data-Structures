#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int decimal_val=0,base=1,rem;

	while(n>0){
		rem=n%10;
		decimal_val=decimal_val+rem*base;
		n=n/10;
		base=base*2;
	}
	cout<<decimal_val;
}