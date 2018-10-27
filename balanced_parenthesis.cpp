#include <iostream>
#include <stack>
using namespace std;

bool parenthesis(string str) {
	int global_max = 0;
	int current_max = 0;
	stack<char> st;
	for(int i=0;i<str.size();i++) {
		if(str[i] == '(') {
			st.push('(');
			current_max++;
			if(global_max < current_max) {
				global_max = current_max;
			}
		} else if(str[i] == ')') {
			if(st.empty()) {
				return false;
			}
			if(!st.empty() and st.top() == '(') {
				current_max--;
				st.pop();
			}

		} else {
			// Nothing
		}
	}
	if(current_max > 0) {
		return false;
	}
	return true;
}	

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int num=parenthesis(str);
	if(num!=0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}