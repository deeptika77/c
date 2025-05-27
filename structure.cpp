/*Create a structure student having data members name, address and percentage and 
displays the name of those student whose percentage is greater than or equal to 80
 and address is bharatpur.*/
 #include<stdio.h>
 #include<string.h>
 struct student{
 	char name[30];
 	char address[20];
 	float percent;
 };
 int main(){
 	int n;
 	printf("Enter the number of students");
 	scanf("%d",&n);
 	struct student s[n];
 	for(int i=0;i<n;i++)
 	{
 		printf("\n enter name, address and percentage");
 		scanf("%s%s%f",s[i].name,s[i].address,&s[i].percent);
	 }
	 for(int i=0;i<n;i++)
 	{
 		if(s[i].percent>=80 && strcmp(s[i].address,"bharatpur")==0)
 		{
 			printf("Name:%s",s[i].name);
		 }
	  }
 	
 	return 0;
 }
