#include<bits/stdc++.h>

// Example multiset structure
//can ahave multiple occurence of element

using namespace std;
int main() {
	//printf("Template for competitive coding.\n");
	
	multiset<int> ms;
	ms.insert(5);	
	ms.insert(5);	
	ms.insert(5);

	cout<<ms.count(5)<<"\n"; //3
	
	ms.erase(5); // erases all occurence of 5
	
	cout<<ms.count(5)<<"\n"; //0
	
	ms.insert(2);	
	ms.insert(2);	
	ms.insert(2);

	ms.erase(ms.find(2));
	
	
	cout<<ms.count(2)<<"\n"; //2
		

	return 0;
}
