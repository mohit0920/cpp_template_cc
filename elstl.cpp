#include<iostream>
#include<list>
#include<cstdlib>

using namespace std;
void display(list<int> &temp_list){
	list<int> :: iterator p;
	for(p=temp_list.begin();p!=temp_list.end();++p)
		cout<<*p<<" ";
	cout<<endl;
}


int main() {
//	cout<<"Template for competitive coding"<<endl;
	
	list<int> list1;
	list<int> list2(5);

	for(int i=0; i<3; i++)
		list1.push_back(rand()%100);
	list<int> :: iterator p;

	for(p=list2.begin(); p!=list2.end(); ++p)
		(*p)=(rand()%100);
	cout<<"List1:";
	display(list1);
	cout<<"List2:";
	display(list2);

	list1.push_front(100);
	list1.push_back(200);
	cout<<"push front l1"<<endl<<"push back l1"<<endl;


	list2.pop_front();
	cout<<"pop front l2"<<endl;

	
	cout<<"List1:";
	display(list1);
	cout<<"List2:";
	display(list2);
	
	list<int> listA, listB;
	listA=list1;
	listB=list2;


	cout<<"ListA:";
	display(listA);
	cout<<"ListB:";
	display(listB);

	list1.merge(list2);
	cout<<"Merged unsorted list"<<endl;
	display(list1);
	list1.sort();
	
	listA.sort();
	listB.sort();
	listA.merge(listB);
	cout<<"Merged after sorting :"<<endl;
	display(listA);
	display(list1);

	listA.reverse();
	cout<<"Reversed listA:"<<endl;
	display(listA);
	return 0;
}
