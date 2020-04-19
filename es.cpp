#include<bits/stdc++.h>

//Example stack

using namespace std;
int main() {
//	printf("Template for competitive coding.\n");

	stack<int> s;
	
	s.push(3);
	s.push(2);
	s.push(5);
	cout<<s.top()<<"\n"; //5
	s.pop();
	cout<<s.top()<<"\n"; //2
	
	return 0;
}
