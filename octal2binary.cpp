#include <iostream>
#include <cmath>

using namespace std;

long long Oct2Bin(int n){

    int d = 0, i = 0;
    long long b = 0;

    while(n != 0)
    {
        d += (n%10) * pow(8,i);
        i++;
        n/=10;
    }

    i = 1;

    while (d!=0)
    {
        b += (d % 2) * i;
        d /= 2;
        i *= 10;
    }

    return b;
}

int main(){
    int n;
    cin >> n;
    cout<<Oct2Bin(n)<<endl;
    return 0;
}