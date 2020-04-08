#include<bits/stdc++.h>

using namespace std;
int main() {
	//printf("Template for competitive coding.\n");
	int a[]={0,1,2,3,4,7,7,7,8};
	auto k=lower_bound(a, a+9, 7) - a;
	auto j=upper_bound(a, a+9, 7) -a;
	auto r=equal_range(a, a+9, 7);
	printf("%d %d %d %d %d", k, j, r.second, r.first, r.second-r.first);
	
	return 0;
}
