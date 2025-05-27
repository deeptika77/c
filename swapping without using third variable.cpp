// to swap the values of two variables without using third variable
#include<stdio.h>
void swap(int*,int*);
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n a=%d and b=%d",a,b);
}
void swap(int *a,int *b){
	*a=*a+*b;// derefrencing= pointer lai feri agadi * rakhera tesma bhako memory location ko value access garni
	
	*b=*a-*b;
	*a=*a-*b;
}
