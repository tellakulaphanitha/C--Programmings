#include<stdio.h>
void mul(int,int);
int main()
{
	int X=40,Y=80;
	mul (X,Y);
	return 0;
}
void mul(int X,int Y)
{
	int Z;
	Z=X*Y;
	printf("mul =%d",Z);
}
