#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int val=1;

	for (int i=1; i<=n; i++){
		for (int j=1;j<=n-i;j++){
			cout<<"\t";
		}

		val=i;

		for(int j=1;j<=i;j++){
			cout<<val<<"\t";
			val++;
		}

		val=val-2;

		for(int j=1;j<=i-1;j++){
			cout<<val<<"\t";
			val--;
		}
		cout<<endl;
	}
	return 0;
}