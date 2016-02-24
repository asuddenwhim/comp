//code to check if power of 2
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
	if(n & n-1)
		return false;
	else
		return true;
	}
int main() {
	int tc, n;
	cin>>tc;
	while(tc--){
	cin>>n;
	cout<<isPowerOfTwo(n);}
}
