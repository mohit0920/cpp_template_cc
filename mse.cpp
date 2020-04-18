#include<bits/stdc++.h>
//map structure example
// map and unordered map
using namespace std;
int main() {
//	printf("Template for competitive coding.\n");
	map<string, int> m;
	m["monkey"]=4;
	m["banana"]=3;
	m["harpischord"]=9;

	cout<<m["banana"]<<"\n"; //3

	cout<<m["asdsd"]<<"\n"; //0 default value
	
	cout<<m.count("asdsd")<<"\n";
	cout<<m.count("wer")<<"\n";

	for (auto x: m){
	cout<<x.first<<" "<<x.second<<"\n";
	}

	return 0;
}
