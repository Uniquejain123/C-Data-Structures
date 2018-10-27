#include<iostream>
using namespace std;

int squareRoot(int n){

	int s=0;
	int e=n;
	int ans=0;

	while(s<=e){
		int m=(s+e)/2;
		if(m*m==n){
			return m;
		}
		else if(m*m<n){
			ans=m;
			s=m+1;
		}
		else{
			e=m-1;
		}
	}
	return ans;
}

int main(){

	int n;
	cin>>n;
	cout<<squareRoot(n)<<endl;
	return 0;
}