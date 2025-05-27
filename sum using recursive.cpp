// sum of numbers from 1 to 10
#include<stdio.h>
int numbers(int);
int main(){
		printf("sum is %d",numbers(10));
	}
	int numbers(int n){
	
		if(n<=1)
		{
			return 1;
		}
		
			return n+numbers(n-1);

	

}
