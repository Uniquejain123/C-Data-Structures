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
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			//Loop for printing elements from i to j
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=a[k];

				//Check if sum is greater than largest_sum
				if(sum > largest_sum){
					largest_sum=sum;
					left=i;
					right=j;
				}
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