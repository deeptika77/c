#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    char faculty[50];
    float GPA;
}S[3];
int main(){
    FILE *fp;
    fp = fopen("RESULT.DAT","w");
    if(fp == NULL){
        printf("ERROR OPENING THE FILE");
        return 1;
    }
    int i;
    for(i=0;i<3;i++){
        printf("Enter the name of the student:");
        fgets(S[i].name,sizeof(S[i].name),stdin);
        printf("Enter the faculity:");
        fgets(S[i].faculty,sizeof(S[i].faculty),stdin);
        printf("Enter the gpa:");
        scanf("%f",&S[i].GPA);
        getchar();
    }
    for(i=0;i<3;i++){
        fprintf(fp,"%s",S[i].name);
        fprintf(fp,"%s",S[i].faculty);
        fprintf(fp,"%f",S[i].GPA);
    }
    for(i=0;i<3;i++){
       if(strcmp(S[i].faculty,"Engineering\n")==0 && S[i].GPA>3.5){
        printf("%s\n",S[i].name);
        printf("%s\n",S[i].faculty);
        printf("%f\n",S[i].GPA);
       }
    }
    fclose(fp);
    return 0;
}

