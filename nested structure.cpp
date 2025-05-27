// nested structure
#include<stdio.h>
struct dob{
	int day; 
	int month;
	int year;
};
struct student{
	char name[30];
	int roll;
	struct dob date;
};
int main() {
struct student s;
printf("Enter name, roll and date of birth\n");
scanf("%s%d%d%d%d",s.name,&s.roll,&s.date.day,&s.date.month,&s.date.year);
printf("Displaying datas\n");
printf("Name:%s\t Roll:%d\t Date Of Birth:%d-%d-%d",s.name,s.roll,s.date.day,s.date.month,s.date.year);
}
