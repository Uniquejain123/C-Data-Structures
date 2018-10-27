#include<iostream>
#include<stack>
using namespace std;

bool AreParenthesisBalanced(String s){
	stack<char> st;
	char x;
	int count=0;

	for(int i=0;i<=s.length();i++){
		if(s(i) == '('){
			st.push('(');
			count++;
		}
		if(s(i) == ')'){
			st.pop('(');
			count--;
		}
	}
}

int main(int argc, char const *argv[])
{
	
	return 0;
}