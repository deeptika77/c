#include<stdio.h>
void trans(int a[][3]){

int i,j,b[3][2];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
}

int main()

{
	int a[2][3],i,j;
	printf("Enter elements");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	trans(a);
	return 0;
}

