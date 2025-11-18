#include<stdio.h>
void sum(int,int);
int main()
{
	int X=10,Y=20;
	sum(X,Y);
	return 0;
}
void sum (int X,int Y)
{
	int Z;
	Z=X+Y;
	printf("sum=%d",Z);
}
