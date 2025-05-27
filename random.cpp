#include<stdio.h>
void random(int *p){
	*p=10;
}
int main(){
int x=5;
printf("%d",x);
random(&x);	
printf("\n%d",x);
}
