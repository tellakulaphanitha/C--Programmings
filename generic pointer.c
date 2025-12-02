#include<stdio.h>
int main()
{
	int X=10;
	char ch='X';
	void *ptr;
	ptr=&X;
	printf("value of ptr=%d",*(int*)ptr);
	ptr=&ch;
	printf("\n value of ptr =%c",*(char*)ptr);
	return 0;
}
