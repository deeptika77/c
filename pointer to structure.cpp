#include<stdio.h>
#include<conio.h>
struct student{
	char name[20];
	int roll;
};
int main()
{
	struct student s;
	struct student *ptr;
	ptr=&s;
	printf("Enter name");
	scanf("%s",ptr->name);
	printf("Enter roll");
	scanf("%d",&ptr->roll);
	printf("\n Displaying the information");
	printf("name:%s\n",ptr->name);
	printf("roll:%d\n",ptr->roll);
	return 0;
}
