#include<stdio.h>
int main()
{
	int X=12;
	int *ptr=NULL;
	if(ptr==NULL)
	ptr=&X;
	printf("value of ptr =%d",*ptr);
	return 0;
}
