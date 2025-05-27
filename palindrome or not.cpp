// to check whether the number is palindrome or not using function
#include<stdio.h>
int rev(int);
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(rev(n)==n){
		printf("%d is palindrome",n);
	}
	else{
		printf("%d is not palindrome",n);
	}
}
int rev(int n){
	int r,re=0;
	while(n>0){
		r=n%10;
		re=(re*10)+r;
		n=n/10;
	}
	return re;
}
