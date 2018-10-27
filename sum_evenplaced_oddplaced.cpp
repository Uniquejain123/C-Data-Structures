#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int last,oddsum=0,evensum=0,count=0;

	while(n!=0){
		last = n%10;
		count++;
		if(count%2 == 0){
			evensum=evensum+last;
		}
		else{
			oddsum=oddsum+last;
		}
		n=n/10;
	}
	cout<<oddsum<<endl;
	cout<<evensum<<endl;
	return 0;
}