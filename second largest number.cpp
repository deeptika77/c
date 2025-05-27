// to find the second largest number
#include<stdio.h>

int main()
{
	int a[100],l,s=0,i,n,m;
	printf("Enter the number of digits");
	scanf("%d",&n);
	printf("\n Enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=1;i<n;i++){
		if (a[i]>l){
			l=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==l)
		
		{
		m=i;
		}
	}
	for(i=0;i<n;i++){
		if(i==m)
	{
		continue;
	}
	if(a[i]>s)
	{
		s=a[i];
	}
	}
	printf("\n the second largest number is %d",s);
	return 0;
}
