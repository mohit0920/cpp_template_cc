#include<iostream>
using namespace std;

#include<algorithm>
#include<functional>


int main() {
//	cout<<"Template for competitive coding"<<endl;
	
	int x[]={12,43,45,33,35};
	int y[]={90,79,57,55,99};

	sort(x,x+5,greater<int>());
	sort(y,y+5);
	
	for(int i=0; i<5; i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++){
		cout<<y[i]<<" ";
	}
	cout<<endl;
	int z[10];

	merge(x,x+5,y,y+5,z);
	for(int i=0; i<10; i++){
		cout<<z[i]<<" ";
	}
	cout<<endl;
	return 0;
}
