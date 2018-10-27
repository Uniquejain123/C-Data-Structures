#include <iostream>
using namespace std;
int main() {
    int N,a=0,b=1,c=0,i=0,j;
    cin>>N;
    while(i<=N){
        j=1;
        while(j<=i){
            cout<<c<<'\t';
            a=b;
            b=c;
            c=a+b;
            j++;
        } 
        i++;
        cout<<'\n';
    }
    return 0;
}
    