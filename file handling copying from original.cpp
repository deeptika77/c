#include<stdio.h>
int main(){
	FILE *fp1,*fp2;
	fp1=fopen("student.dat","r");
	if(fp1==NULL){
		printf("Error opening the file");
		return 1;
	}
	fp2=fopen("new.dat","w");
	if(fp2==NULL){
		printf("Error opening the file");
		return 1;
	}
	char ch;
	while(fscanf(p1,"%c",&ch)!=EOF)
	{
		fprintf(fp2,"%c",ch);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
