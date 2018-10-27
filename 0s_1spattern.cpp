#include<iostream>
using namespace std;


int main(){
    //Program to print binary pattern

    int n;
    cin>>n;

    int i,j;
    
    for(i=1;i<=n;i++){
        int val = i%2;
        for(j=1;j<=i;j++){
            cout<<val;
            val = 1-val;
        }
        cout<<endl;
    }
    return 0;
}
