#include<iostream>
using namespace std;


int main(){
	
	//Print the ASCII Table (0-255)

	int i=0;
	while(i<=255){
		cout<<i<<"="<<char(i)<<endl;
		i++;
	}
	return 0;
}