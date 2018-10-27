#include<iostream>
using namespace std;


int main(){
	char a;
	int x=0, y=0;
	a=cin.get();
	while(a!='\n'){
		if(a=='N'){
			y++;
		}
		else if(a=='E'){
			x++;
		}
		else if(a=='W'){
			x--;
		}
		else{
			y--;
		}
		a=cin.get();
	}

	cout<<x <<endl;
	cout<<y <<endl;

	//Print the string using loop over x and y

	if(x>0 && y>0){
		while(x--){
			cout<<"E";
		}
		while(y--){
			cout<<"N";
		}
	}
	else{
		while(x++){
			cout<<"W";
		}
		while(y++){
			cout<<"S";
		}
	}
	return 0;

}