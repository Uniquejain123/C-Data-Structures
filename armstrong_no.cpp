#include<iostream>
using namespace std;

int power(int a,int b){
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
}

bool Armstrong(int n){

	int last_digit,sum=0,count=0,num;

	num=n;

	while(num!=0){
		num=num/10;
		++count;
	}

	num=n;

	while(num!=0){
		last_digit=num%10;
		sum=sum+power(last_digit,count);
		num=num/10;
	}
	if(sum==n){
		return true;
	}
	else{
		return false;
	}
}

int printArmstrong(int n1,int n2){
	for(int n=n1;n<=n2;n++){
		if(Armstrong(n)==true){
			cout<<n<<" ";
		}
	}
}

int main(){

	int n,n1,n2;
	cin>>n;
	cin>>n1;
	cin>>n2;

	if(Armstrong(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    printArmstrong(n1,n2);
	return 0;
}