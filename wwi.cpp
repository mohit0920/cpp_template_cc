#include<bits/stdc++.h>

// Working with iterators

using namespace std;
int main() {
//	printf("Template for competitive coding.\n");

	vector<int> v={1,2,3,5,7,9};
	int a[5]={2,3,1,5,4};	
	for (auto x: v){
		cout<<x<<" ";
	}	
	cout<<"\n";

	sort(v.begin(), v.end());

	for (auto x: v){
		cout<<x<<" ";
	}	
	cout<<"\n";
	reverse(v.begin(), v.end());

	for (auto x: v){
		cout<<x<<" ";
	}	
	cout<<"\n";
	random_shuffle(v.begin(), v.end());

	for (auto x: v){
		cout<<x<<" ";
	}	
	cout<<"\n";

	for(int i=0; i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	sort(a,a+5);

	for(int i=0; i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	reverse(a,a+5);

	for(int i=0; i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	random_shuffle(a,a+5);

	for(int i=0; i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";

	// set iterators

	set<int> s={6,7,1,2,3,4,5};
	set<int>::iterator it=s.begin();
	cout<<*it<<"\n";

	auto it3 =s.end();
	it3--;
	cout<<*it3<<"\n";	
//	cout<<*(s.end()-1)<<"\n";
	
	auto it2=s.find(99);
	if(it==s.end()){
		cout<<"Not found"<<"\n";
	}
	

	return 0;
}
