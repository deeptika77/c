// to find the length of the string without library functions
#include<stdio.h>
int len(char*);
int main()
{
	char a[100];
	printf("Enter a string");
	gets(a);
	printf("%s has %d letters",a,len(a));
	return 0;
}
int len(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
			i++;
	}
	return i;
}

