#include<stdio.h>
int main(){
	FILE *fp1,*fp2;
	fp1=fopen("old.dat","r");
	fp2=fopen("prime.dat","w");
	int num,i;
	while(fscanf(fp1,"%d",&num)!=EOF){
		while(num>2){
			for(i=2;i<num;i++){
			if(num%i==0){
				break;
			} 
			if(num==i+1){
				fprintf(fp2,"num=%d",num);
			}}}
			if(num==2){
				fprintf(fp2,"%d\n",num);
			}
		} 
	fclose(fp1);
	fclose(fp2);
	return 0;	
	
}
