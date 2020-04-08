#include<bits/stdc++.h>
// Example dynamic array vector structure



using namespace std;
int main() {
	vector <int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);

	cout<<v[0]<<"\n"<<v[1]<<"\n"<<v[2]<<endl;
	
	for (int i=0; i< v.size(); i++){
		cout<<v[i]<<"\n";
	}
	
	for (auto x:v){
		cout<<x<<"\n";
	}

	cout<<v.back()<<"\n"; //5
	v.pop_back(); // returns 5
	cout<<v.back()<<"\n"; //2
	
	vector <int> v1={2,4,2,5,1};

	vector <int> v2(10); // size 10 initial value 0

	vector <int> v3(5,3); // size 5 initial value 3

	
	return 0;
}
