#include<iostream>
using namespace std;

bool check_prime(int n){
    if (n<=1){
    	return false;
    }
    for(int i=2;i*i<=n;i++){
    	if(n%i==0)
    		return false;
    }
    return true;
}

int printPrimes(int a, int b){
	//Print all Primes
	for(int n=a;n<=b;n++){
		if(check_prime(n)==true){
			cout<<n<<" ";
		}
	}
}

int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	printPrimes(a,b);
	return 0;
}