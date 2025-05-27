// structure to a function
#include<stdio.h>
struct student{
	int a;
	int b;
};
void function(struct student *d)//void function(struct student d)
{
	printf("%d %d",d->a,d->b);//printf("%d %d",d.a,d.b);
}
int main()
{
	struct student d={5,10};
	function(&d);// function(d);
	return 0;
	
} /* structure variable ko size pahilai bata thulo huncha so yeslai aru variable ma copy garda jhan badi memory
lini bhayo so yesko value bhanda address pass gareko ramroo */
