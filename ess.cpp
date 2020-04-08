#include<bits/stdc++.h>
// Example set structures

using namespace std;
int main() {
//	printf("Template for competitive coding.\n");
	
	set <int> s;
	
	s.insert(3);
	s.insert(2);
	s.insert(5);
	
	cout<<s.count(3)<<"\n"; //1
	cout<<s.count(4)<<"\n"; //0
	s.erase(3);
	s.insert(4);
	
	cout<<s.count(3)<<"\n"; //0
	cout<<s.count(4)<<"\n"; //1

	set <int> s1 = {2,5,6,8};
	
	cout<<s.size()<<"\n"; //4

	for(auto x:s1){
		cout<<x<<"\n";
	}

	s1.insert(2);//no new element will be inserted.
	s1.insert(2);
	s1.insert(2);
	for(auto x:s1){
		cout<<x<<"\n";
	}
	

	return 0;
}
