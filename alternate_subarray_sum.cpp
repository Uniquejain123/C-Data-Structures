#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int largest_sum=0;
	int left=0, right=0;

	//Build cumulative sum array
	int c[100];
	c[0]=a[0];
	for(int i=0;i<n;i++){
		c[i] = a[i] + c[i-1];
	}

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){

			int sum;
			sum=i>0? c[j]-c[i-1] : c[j];

			//Check if sum is greater than largest_sum
			if(sum > largest_sum){
				largest_sum=sum;
				left=i;
				right=j;
			}
		}
	}
    cout<<largest_sum<<endl;

    //largest subarray
    for(int k=left;k<=right;k++){
    	cout<<a[k]<<" ";
    }

	return 0;
}