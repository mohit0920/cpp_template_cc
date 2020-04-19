#include<bits/stdc++.h>
//priority queue
using namespace std;
int main() {
	//printf("Template for competitive coding.\n");
	
	priority_queue<int> pq;

	priority_queue<int, vector<int>, greater<int>> spq;
	
	pq.push(3);
	pq.push(5);
	pq.push(7);
	pq.push(2);
	
	cout<<pq.top()<<"\n"; //7
	pq.pop();
	cout<<pq.top()<<"\n"; //5
	pq.pop();
	pq.push(6);
	cout<<pq.top()<<"\n"; //6
	pq.pop();
	
	spq.push(3);
	spq.push(5);
	spq.push(7);
	spq.push(2);
	
	cout<<spq.top()<<"\n"; //2
	spq.pop();
	cout<<spq.top()<<"\n"; //3
	spq.pop();
	spq.push(6);
	cout<<spq.top()<<"\n"; //5
	spq.pop();
	
	
	return 0;
}
