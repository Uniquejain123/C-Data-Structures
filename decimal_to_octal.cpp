#include<iostream>
using namespace std;

void dec2oct(int n){
	int octal_no[100];

	int i=0;
	while(n!=0){
		octal_no[i]=n%8;
		n=n/8;
		i++;
	}

	for(int j=i-1;j>=0;j--){
		cout<<octal_no[j];
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	dec2oct(n);
	return 0;
}