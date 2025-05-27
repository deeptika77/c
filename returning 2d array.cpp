// to find the sum of 3X2 matrix
#include<stdio.h>
void sum(int a[][2]) //void sum(int (*a)[2])
{
int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
	s=s+a[i][j];
}}
printf("the sum is %d",s);
}
int main(){
	int a[3][2], i,j;
	printf("Enter the elements of array");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	sum(a);
}

