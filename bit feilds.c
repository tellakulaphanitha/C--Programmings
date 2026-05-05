#include<stdio.h>
struct date
{
	int d:6;
	int m:5;
	int y;
};
int main()
{
	struct date X1={31,12,2025};
	printf("size of the structure=%lu",sizeof (struct date));
	printf("\n %d %d %d",X1.d,X1.m,X1.y);
	return 0;
}
