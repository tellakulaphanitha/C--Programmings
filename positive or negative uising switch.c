#include<stdio.h>
int main()
{
	int X;
	printf("enter X value");
	scanf("%d",&X);
	switch(X>0)
	{
		case 1:printf("it is positive");
		       break;
	    case 0:printf("it is negative");
	           break;
	}
	return 0;
}
