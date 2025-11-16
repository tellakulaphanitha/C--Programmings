#include<stdio.h>
int main()
{
	int a[100],n,i,X,flag=0;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element");
	scanf("%d",&X);
	for(i=0;i<n;i++)
	{
		if(X==a[i])
		{
			printf("element is found");
			flag=1;
		}
	}
	if(flag==0)
	printf("element is found");
	return 0;
}
