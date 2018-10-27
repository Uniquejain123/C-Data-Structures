#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				cout<<"("<<i<<","<<j<<","<<k<<")";
			}
		}
		cout<<endl;
	}

	for(int i=0;i<=n-3;i++){
		for(int j=i+1;j<=n-2;j++){
			for(int k=j+1;k<=n-1;k++){
				cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")";
			}
		}
		cout<<endl;
	}
	return 0;
}