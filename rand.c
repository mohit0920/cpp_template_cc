#include<stdlib.h>
#include<stdio.h>


int main() {
	
	time_t t;
	int n;
	//Initialize random number generator
	srand((unsigned) time(&t));
	//generate a random number
	n=rand()%100+1;
	
	if(n%3==0){
		printf("Crackle"); // prints if number is divisible by 3
	}
	if(n%5==0){
		printf("Pop"); // prints if number is divisible by 5
	} 
	// Both if statements works independently and prints CracklePop if number is divisible by Both.
	
	if(n%3!=0 && n%5!=0) {	
		printf("%d",n);
	}
	return 0;
}
