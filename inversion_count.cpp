#include<iostream>
using namespace std;

int merge(int *a,int s,int e){
	int i=s;
	int mid = (s+e)/2;
	int j=mid+1;
	
	int k=s;
	int temp[1000];
	int inv = 0;

	//Merging Logic
	while(i<=mid && j<=e){
		if(a[i]<a[j]){
			temp[k]=a[i];
			i++;
			k++;
		}
		else{
			inv += (mid-i+1);
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		temp[k]=a[i];
		i++;
		k++;
	}

	//or

	while(j<=e){
		temp[k]=a[j];
		j++;
		k++;
	}

	//Copy elements back to the original array
	for(int i=s;i<=e;i++){
		a[i]=temp[i];
	}

	return inv;
}

int mergeSort(int *a,int s,int e){
	//Base Case
	if(s>=e){
		return 0;
	}

	//Recursive Case
	int mid = (s+e)/2;

	//Sort the first part
	int left = mergeSort(a,s,mid);
	
	//Sort the second part
	int right = mergeSort(a,mid+1,e);
	
	//Merge them
	int cross = merge(a,s,e);
	
	return left+right+cross;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int a[100];

	for (int i = 0; i < n; i++){
		cin>>a[i];
	}

	cout<<mergeSort(a,0,n-1);

	/*for (int i = 0; i < n; i++){
		cout<<a[i]<<",";
	}*/
	cout<<endl;
	return 0;
}