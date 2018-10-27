#include<iostream>
using namespace std;


int main(){
	int n,last_digit,sum=0;
	cin>>n;

	for( ;n>0;n/=10){
		last_digit=n%10;
		sum=sum+last_digit;
	}
	cout<<sum<<endl;
	return 0;
}