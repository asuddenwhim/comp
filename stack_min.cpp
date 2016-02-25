//min number in a stack
#include <iostream>
#include <stack>
using namespace std;

int getMin (stack <int> st){
		if (!st.empty())
			return st.top();
		else
			return 100;
	}

int main() {
	// your code goes here
	stack <int> stk;
	stack <int> hold_min;
	int k;
	for(int i=0;i<4;i++){
		cin>>k;
		stk.push(k);
		if (k < getMin(hold_min))
			hold_min.push(k);
	}
	cout<<getMin(hold_min);
	return 0;
}
