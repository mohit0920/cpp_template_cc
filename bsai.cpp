//Binary search alternate implementation.
#include<bits/stdc++.h>

using namespace std;
int bs(int *inp_arr, int s_inp, int x){   //x = search element s_inp = size of input array
	int b,k=0;
	for (b=s_inp/2; b>=1; b=b>>1){
		while(k+b<s_inp && inp_arr[k+b] <= x) k+=b;
	}
	if(inp_arr[k] == x)
		return k;
	else
		return -1;
}
int main() {
	
	int a[5]={1,2,3,4,5};
	int i=bs(a,5,4);
	printf("\n%d\n",i);	

	return 0;
}
