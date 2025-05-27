// pointer arithmetic
#include<stdio.h>
int main(){
	int a=2;
	int *p=&a;
	printf("address of a=%u",p);
	p++;// pointer ko address increases by the size of datatype. yo case ma int bhayera plus 4 huncha
	printf("address of a=%u",p);
}

