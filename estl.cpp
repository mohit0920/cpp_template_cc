#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v) {
	for(int i=0; i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main() {
	//cout<<"Template for competitive coding"<<endl;
	
	vector<int> v;
	cout<<"Intial size= "<<v.size()<<endl;
	int x;
	cout<<"Enter Five integer values: ";

	for(int i=0; i<5; i++) {
		cin>>x;
		v.push_back(x);
	}
	cout<< "size after adding 5 values="<<v.size()<<endl;

	cout<<"Current contents:"<<endl;
	display(v);

	v.push_back(6.6);

	cout<<"size after adding 6.6="<<v.size()<<endl;
	
	cout<<"Contents now: \n";
	display(v);
	
	vector <int> :: iterator iter = v.begin();
	iter = iter +3;

	v.insert(iter,1,9);

	cout<<"Contents after iter 1,9 insert:";
	display(v);

	v.erase(v.begin()+3, v.begin()+5);

	cout<<"Contents after erase(v.begin()+3, v.begin()+5): ";
	display(v);


	return 0;
}
