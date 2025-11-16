#include<stdio.h>
int main()
{
	int a[100],n,i,low,high,mid,X;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element");
	scanf("%d",&X);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<high)
	{
		if(X==a[mid])
		break;
		else if (X>a[mid])
		low=mid+1;
		mid=(low+high)/2;
	}
	if(X==a[mid])
	printf("search element found");
	else
	printf("search element is not found");
	return 0;
}
