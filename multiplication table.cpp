// multiplication table
#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d*%d=%d",n,i,(n*i));
	}
	return 0;
}
