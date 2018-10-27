#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for(int i=1;i<n;i++){
		cout<<"  ";
	}
	cout<<'1'<<endl;

	//Upper
	for(int i=2;i<=(n+1)/2;i++){
		//Print Spaces
		for(int j=1;j<=n-(2*i-1);j++){
			cout<<"  ";
		}

		//Left Part
		for(int j=i;j>=1;j--){
			cout<<j<<" ";
		}

		//Spaces
		for(int j=1;j<=2*(i-1)-1;j++){
			cout<<"  ";
		}

		//Right Part
		for(int j=1;j<i+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	//Lower
	for(int i=1;i<(n-1)/2;i++){
		//Spaces
		for(int j=1;j<=2*i;j++){
			cout<<"  ";
		}

		//Left Part
		int k=(n-1)/2;
		for(int j=(k-i)+1;j>=1;j--){
			cout<<j<<" ";
		}

		//Spaces
		for(int j=n/2+1;j>=2*i;j--){
			cout<<"  ";
		}

		//Right Part
		for(int j=1;j<=(k-i)+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	for(int i=1;i<n;i++){
		cout<<"  ";
	}
	cout<<'1'<<endl;
	return 0;
}