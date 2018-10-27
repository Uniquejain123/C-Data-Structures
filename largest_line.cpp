#include<iostream>
#include<cstring>
using namespace std;

int main(){

	int n;
	cin>>n;

	char a[1000];
	char enter=cin.get();
	int len;
	int maxLen=0;
	char maxString[1000];

	while(n--){
		cin.getline(a,1000);
		len=strlen(a);
		if(len>maxLen){
			maxLen=len;
			//Copy the a into max string
			int j;
			for(j=0;a[j]!='\0';j++){
				maxString[j]=a[j];
			}
			maxString[j]='\0';
		}
	}
	cout<<maxLen<<endl;
	cout<<maxString<<endl;
	return 0;
}