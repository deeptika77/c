#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("old.dat","w");
	fprintf(fp1,"1 2 3 4 5 6 7 8");
	fclose(fp1);
}

