#include <iostream>
using namespace std;

void fun(char *in,char *out,int i,int j){

	//Base Case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	//Recursive Case
	//1 char pick
	int digit=in[i]-'0';
	if(digit!=0){
		char ch = 64+digit;
		out[j]=ch;
		fun(in,out,i+1,j+1);
	}

	//2 char pick
	if(in(i+1)!='\0'){
		int sdigit=in[i+1]-'0';
		int no=digit*10+sdigit;
		if(no<=26){
			ch=64+no;
			fun(in,out,i+2,j+1);
		}
	}

}

int main(int argc, char const *argv[])
{
	char a[1000];
	cin>>a;

	char out[1000];
	fun(a,out,0,0);

	return 0;
}