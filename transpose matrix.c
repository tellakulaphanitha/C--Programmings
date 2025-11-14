#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("enter rows and column size");
	scanf("%d%d",&r,&c);
	printf("enter A matix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	printf("transpose matrix is  \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
