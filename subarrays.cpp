#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//First Part
	for(int i=1;i<n;i++){
		for(int j=i;j<n;j++){
			//Loop for printing elements from i to j
			for(int k=i;k<=j;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
    cout<<endl;

	return 0;
}