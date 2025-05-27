// to print numbers from 1 to 5 using recursive function
#include<stdio.h>
int numbers(int);
int main(){
		numbers(1);
	}
	int numbers(int n){
		printf("%d\t",n);
		if(n==5){
			return 1;
		}
		numbers(n+1);
	}
