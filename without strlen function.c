#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,l;
	printf("enter string name");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	l=i;
	printf("length of the string =%d",l);
	return 0;
}
