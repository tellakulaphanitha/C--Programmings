#include<stdio.h>
struct address
{
	char street[10];
	char city[10];
	long int pcode;
};
struct student
{
	int rollno;
	char name[10];
	float per;
	struct address a;
};
int main()
{
	struct student s={101,"raju",79.80,{"aditya","vizag",543202}};
	printf("%d %s %f %s %s %ld",s.rollno,s.name,s.per,s.a.street,s.a.city,s.a.pcode);
	return 0;
}
