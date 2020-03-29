#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T1>

class Vector {
	int size;
	T1  *v;
	public:
		Vector(int m){
			v=new T1 [size=m];
			for(int i=0; i<m;i++)
			{	v[i]=i+2;
			//	cout<<v[i]<<endl;
		
			}
		}

		T1 operator*(Vector &y){
			T1 s=0;
			for(int i=0; i<this->size; i++)
				s+=y.v[i]*this->v[i];
			return s;
		}
		void show() {
			for(int i=0;i<this->size;i++){
				cout<<this->v[i]<<"\t";
			}
			cout<<endl;
		}
};

int main() {
	cout<<"Template for competitive coding"<<endl;
	
	Vector <float>  v1(5), v2(5);
	int sum;
	//int a[]={1,2,3};
	//int b[]={4,5,6};

//	Vector v1=a;
//	Vector v2=b;
	//cout<<"call to show"<<endl;	
	v1.show();
	v2.show();
	//cout<<"end call show"<<endl;

	sum=v1*v2;
	cout<<sum<<endl;
	
	return 0;
}
