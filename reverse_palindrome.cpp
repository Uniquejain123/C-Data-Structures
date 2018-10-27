#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int rev=0, rem, num;

	num=n;

	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}

	cout<<rev<<endl;
	if(rev==n){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not Palindrome"<<endl;
	}
	return 0;
}