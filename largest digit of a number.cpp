// to find the largest digit of the given number
#include<stdio.h>
int max(int);
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	printf("The largest digit of %d is %d",n,max(n));
	return 0;
}
int max(int n){
	int r,m=0;
	while(n>0){
		r=n%10;
		n=n/10;
		if(r>m){
			m=r;
		}
	}
	return m;
}
