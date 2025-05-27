#include<stdio.h>
int main()
{
	int n,i=2,j,c,m=1;
	printf("enter the number of terms");
	scanf("%d",&n);
	printf("\nPrime numbers upto %d terms:",n);
	while(m<=n){
	c=0;
			for(j=1;j<=i;j++)
			{
				
			if (i%j==0)
			{
				c++;
			}
		}
	if(c==2)
	{ 
	printf("\t%d",i);
	m++;
	} 
		i++;
		}
	return 0;
}
