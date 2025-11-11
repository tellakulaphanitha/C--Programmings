#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	printf("enter your choice +add -sub *mul /div");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':c=a+b;
		         printf("addition=%d",c);
		         break;
	    case '-':c=a-b;
	             printf("subtraction=%d",c);
	             break;
	    case '*':c=a*b;
	             printf("multiplication=%d",c);
	             break;
	    case '/':c=a/b;
	             printf("division=%d",c);
	    default:printf("invalid choice");
	}
	return 0;
}
