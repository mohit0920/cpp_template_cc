#include<bits/stdc++.h>

using namespace std;
int main() {
//	printf("Template for competitive coding.\n");
	int a[8]={-1,2,4,-3,5,2,-5,2};
	int best=0, sum=0;
	for (int i=0; i<8;i++){
		printf("%d %d\n", a[i], sum);
		if(a[i]>(sum+a[i]))
			sum=a[i];
		else
			sum=sum+a[i];
		if(sum>best)
			best=sum;
	}
	printf("%d\n",best);
	return 0;
}
