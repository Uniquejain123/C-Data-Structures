#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int>&q){
	
	if(q.empty()){
		return;
	}

	int data = q.front();
	q.pop();

	reverseQueue(q);
	q.push(data);
}

void printQueue(queue<int> Queue){
	while(!Queue.empty()){
		cout<<Queue.front()<<" ";
		Queue.pop();
	}
}

int main(int argc, char const *argv[])
{
	int n,a;
	cin>>n;
	queue<int> Queue;
	for (int i=1;i<=n;i++)
	{
		cin>>a;
		Queue.push(a);
	}
	reverseQueue(Queue);
	printQueue(Queue);
	cout<<"END"<<endl;
	return 0;
}