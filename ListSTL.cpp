#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
	list<int> ll;
	for(int i=0;i<10;i++){
		ll.push_back(i);
	}
	for(list<int>::iterator it = ll.begin(); it! = ll.end())
	return 0;
}