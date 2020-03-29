#include<bits/stdc++.h>
using namespace std;

#define MAX_ELEMENT_IN_ARR 10
void count_sort(int *inp, int s_inp, int *op){ // sinp size of input and *inp is pointer to array to be sorted.
	int me=-1; //max element
	int ca[MAX_ELEMENT_IN_ARR]={}; //CA count array
	for(int i=0; i < s_inp; i++){
		ca[inp[i]]++;
		if(me<inp[i])
			me=inp[i];
	}
	for (int i=0; i<me; i++){
		ca[i+1]+=ca[i];
	}
	for (int i=0; i<s_inp; i++){
		op[(--ca[inp[i]])]=inp[i];
	}
}


int main() {
//	printf("Template for competitive coding.\n");
	int a[5]={2,4,3,1,1};
	int b[5]={};
	for(int i=0; i<5; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	count_sort(a, 5,b);
	for(int i=0; i<5; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	
	return 0;
}
