#include<bits/stdc++.h>

using namespace std;
int main() {
//	printf("Template for competitive coding.\n");
	
	queue<int> q;
	
	q.push(3);
	q.push(2);
	q.push(5);
	
	cout<<q.front()<<"\n";
	q.pop();
	cout<<q.front()<<"\n";
	
	return 0;
}
