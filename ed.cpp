#include<bits/stdc++.h>

//Example deque

using namespace std;
int main() {
	//printf("Template for competitive coding.\n");
	
	deque<int> d;
	d.push_back(5); // similar as vector class [5]
	d.push_back(2); //[5,2]
	d.push_front(3); // [3,5,2]
	d.pop_back(); // [3,5]
	d.pop_front(); //[5]

	return 0;

}
