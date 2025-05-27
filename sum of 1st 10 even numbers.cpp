//sum of 1st 10 even numbers
#include<stdio.h>
void sum();
int main(){
//printf("sum=%d",sum());
sum();
}

void sum()
{
	int i,s=0;
	for(i=2;i<=20;i+=2) // i+=2 is used to increase the value of i by 2
	{
	s=s+i;
	}
	printf("sum=%d",s);

//	return s;
}



