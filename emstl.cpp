#include<iostream>
using namespace std;

#include<map>
#include<string>




int main() {
//	cout<<"Template for competitive coding"<<endl;

	string name;
	int number;
	map<string,int> phone;

	cout<<"Enter name and number 3 : "<<endl;
	for (int i=0;i<3; i++){
		cin>>name;
		cin>>number;
		phone[name]=number;
	}
	phone.insert(pair<string, int> ("Bose", 4444));
	int n=phone.size();
	cout<<"\nSize of Map : "<<n<<endl;
       	cout<<"list of phone numbers :"<<endl;
	map<string, int> :: iterator p;
	for (p=phone.begin(); p!=phone.end();++p){
		cout<<(*p).first<<"  "<<(*p).second<<endl;
	}	
	cout<<"Search with name:"<<endl;
	cin>>name;
	number=phone[name];
	cout<<"number :"<<number<<endl;


	return 0;
}
