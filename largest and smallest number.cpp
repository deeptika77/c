// to find largest and smallest number from a list of 5 numbers.
#include<stdio.h>
int main(){
	int a[5],l,s,i;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	s=a[0];
	l=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>l){
			l=a[i];
		}
		if(a[i]<s){
			s=a[i];
		}

	}
	printf("The largest no is %d and smallest is %d",l,s);
}
