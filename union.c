#include<stdio.h>
union student
{
	int rollno;
	char name[10];
	float per;
};
int main()
{
	union student s={101,"aditya",99.00};
	printf("%d %s %f",s.rollno,s.name,s.per);
	return 0;
}
