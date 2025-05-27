//to display the following series upto 25 terms but don't print the 7th term
//2X3,3X5,4X7.....
#include<stdio.h>
int main(){
	int i,a=1,b=2;
	for(i=0;i<25;i++){
		a=a+1;
		b=b+2;
		if(i==6){
			continue;
		}
		printf("%d X %d\n",a,b);
		}
}
