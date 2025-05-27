// ascending order
#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	for(j=i+1;j<5;j++)
	{
		if(a[j]<a[i])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}		
	}
	printf("\n In ascending order:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
