#include<iostream>
using namespace std;

int userChoice(int n){
	int x;
	cout<<"1. Sum"<<endl;
	cout<<"2. Product"<<endl;
	cout<<"Please enter your choice"<<endl;

	cin>>x;

	if(x==1){
		int sum=0;
		for(int i=1;i<=n;i++){
			sum=sum+i;
		}
		return sum;
	}
	else if(x==2){
		int product=1;
		for(int i=1;i<=n;i++){
			product=product*i;
		}
		return product;
	}
	else{
		cout<<"Please make a valid choice"<<endl;
		userChoice(n);
	}
}

int main()
{
	int n;
	cin>>n;

	cout<<userChoice(n)<<endl;
	return 0;
}