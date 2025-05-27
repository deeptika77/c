// to print numbers from 10 to 1 using recursive function
#include<stdio.h>
int numbers(int);
int main(){
		numbers(10);
	}
	int numbers(int n){
		printf("%d\t",n);
		if(n==1){
			return 1;
		}
		numbers(n-1);
}
