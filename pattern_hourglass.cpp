#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	//Upper
	for(int i=0;i<=n;i++){
		for(int j=1;j<=i;j++){
			//Print Spaces
			cout<<"  ";
		}
	
        int val=n-i;

		for(int j=0;j<=n-i;j++){
			
			cout<<val<<" ";
			val--;
		}

		val=1;

		for(int j=0;j<=n-i-1;j++){
			cout<<val<<" ";
			val++;
		}

		cout<<endl;
	}

	//Lower
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			//Print Spaces
			cout<<"  ";
		}

		int val=i;

		for(int j=1;j<=i+1;j++){
			cout<<val<<" ";
			val--;
		}

		val=1;

		for(int j=1;j<=i;j++){
			cout<<val<<" ";
			val++;
		}

		cout<<endl;
	}

	return 0;
}