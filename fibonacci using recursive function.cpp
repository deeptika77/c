// fibonacci series using recursiive function
#include<stdio.h>
int fib(int);
int main(){
	int n; 
	printf("Enter the no of digits\n");
	scanf("%d",&n);
	int b,i;
	for(i=0;i<n;i++){
		b=fib(i);
		printf("%d\t",b);
	}
	return 0;
} 
int fib(int i){
	if(i<=1){
		return i;
	}
	else{
		return fib(i-1)+fib(i-2);
	}
}
