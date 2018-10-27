#include<iostream>
using namespace std;


int main(){
	int count=0;
	for(int i=1;count<=20;i++){
		int j=(3*i)+2;
		if(j%4!=0){
			cout<<j<<endl;
			count++;
		}
	}
	return 0;
}
