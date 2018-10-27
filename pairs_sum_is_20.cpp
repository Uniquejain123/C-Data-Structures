#include<iostream>
using namespace std;


int main()
{
	//Read N Numbers
	//Print that pairs whose sum is 20

	int n;
	cin>>n;

	int a[100];
    for(int i=0;i<n;i++){
	    cin>>a[i];
    }
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==20){
				cout<<"("<<a[i]<<","<<a[j]<<")";
			}
		}
		cout<<endl;
	}
	return 0;
}