#include<iostream>
#include<vector>
using namespace std;


int main(){

	vector<pair<string,int> > v;

	int n;
	cin>>n;

	string f;
	int p;

	for(int i=0;i<n;i++){
		cin>>f>>p;
		pair<string,int> fp;
		v.push_back(make_pair(f,p));
	}

	for(int i=0;i<v.size();i++){
		cout<<"("<<v[i].first<<","<<v[i].second<<")"<<endl;
	}
}