#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    char faculty[20];
    float gpa;
}s;
int main(){
    FILE *fp;
    fp=fopen("Result.dat","w");
	if(fp==NULL)
    {
        printf("\n error opening the file");
        return 1;
    }
    printf("Enter the name, faculty,and gpa of one students");
     	scanf("%s %s %f",s.name,s.faculty,&s.gpa);
        fprintf(fp,"%s %s %f",s.name,s.faculty,s.gpa);
    fclose(fp);
    
         if(strcmp(s.faculty,"Engineering")==0 && s.gpa>3.5){
            printf("%s\n",s.name);
            printf("%s\n",s.faculty);
            printf("%f\n",s.gpa);
     }
    
    return 0;
}
