// second largest using function
#include<stdio.h>
int sec(int*);
int main()
{
	int a[5],i;
	printf("Enter elements");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	int t=sec(a);
	printf("\n The second largest number is %d",t);
	return 0;	
}
int sec(int a[])
{
	int i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]>a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}		
	}
	return a[1];	
}

