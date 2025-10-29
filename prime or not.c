#include<stdio.h>
int main()
{
int n,i,count=0;
printf("enter any number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if (n%i==0)
  count++i;
}
if(count==2)
  printf("it is prime");
else
  printf("not a prime");
return 0;
}
