#include<iostream>
#include<unordered_map>
using namespace std;


int main(int argc, char const *argv[])
{
	unordered_map<string,int> m;
	m.insert(make_pair("apple",100));
	m["guava"] = 90;

	pair<string,int> p;
	p.first = "kiwi";
	p.second = 80;
	m.insert(p);

	if(m.count("strawberry")){
		cout<<m["strawberry"]<<endl;
	}
	else{
		cout<<"Fruit Not Found"<<endl;
	}

	for(auto p:m){
		cout<<p.first<<endl;
		cout<<p.second<<endl;
	}
	cout<<endl;
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<endl;
		cout<<it->second<<endl;
	}

	return 0;
}