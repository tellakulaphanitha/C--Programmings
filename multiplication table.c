#include<stdio.h>
int main()
int i,tn,ts;
printf("enter tn value");
scanf("%d",&tn);
printf("enter ts value");
scanf("%d",&ts);
for(i=1;i<=ts;i++)
{
printf("%d*%d=%d\n",i,tn,i*tn);
}
return 0;
}
