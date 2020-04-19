#include<bits/stdc++.h>
// google kickstart 1
using namespace std;
int main() {
//	printf("Template for competitive coding.\n");

	int t;
	int i,j;
	int n,d,x[1001], op[101];
	cin>>t;	
	for (i=0; i<t; i++){
		cin>>n;
		cin>>d;
		for(j=0; j<n; j++){
			cin>>x[j];
		}
		for(j=n-1;j>-1; j--){
			if(d%x[j]!=0){
				d--;
				j++;
			}
		}
		op[i]=d;
		
	}
				
 	for (i=0; i<t;i++){
		cout<<"Case #"<<i+1<<": "<<op[i]<<"\n";
	}
	return 0;
}
