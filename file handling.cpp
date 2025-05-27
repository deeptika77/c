/* to input name, faculty, program, and gpa of 3 students and store them in 'RESULT.DAT' data file 
and display the records of those students whose faculty is 'Engineering' and GPA>3.5. */
#include<stdio.h>
#include<string.h>
struct student{
	char name[30];
	char faculty[20];
	int gpa;
};
int main(){
	FILE *fp1;
	fp1=fopen("Result.dat","w");
	
	if(fp1==NULL)
	{
		printf("\n error opening the file");
		return 1;
	}
	int i;
	struct student s[1];
	printf("Enter the name, faculty,and gpa of three students");

	 for(i=0;i<1;i++)
	 {
	 	scanf("%s%s%d",s[i].name,s[i].faculty,&s[i].gpa);
	
	 
	 }
	 for(i=0;i<1;i++)
	 {
	 		 	fprintf(fp1,"Name= %s Faculty=%s GPA=%d",s[i].name,s[i].faculty,s[i].gpa);
	 
	 }
	 
	 for(i=0;i<1;i++)
	 {
	 	if(strcmp(s[i].faculty,"Engineering")==0 && s[i].gpa>3.5){
	 		printf("name:%s Faculty:%s Gpa=%d",s[i].name,s[i].faculty,&s[i].gpa);
		 }
	 }
	fclose(fp1);
	return 0;
}
