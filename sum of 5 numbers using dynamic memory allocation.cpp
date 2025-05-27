// sum of 5 numbers
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,*sum;
	a=(int*)malloc(5*sizeof(int));
	sum=(int*)malloc(1*sizeof(int));
	int i; 
	*sum=0;
	printf("Enter numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",(a+i));
	}
	for(i=0;i<5;i++)
	{
		*sum=*sum+*(a+i);
	}
	printf("Sum=%d",*sum);
	return 0;
}
