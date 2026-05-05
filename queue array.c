#include<stdio.h>
#include<stdlib.h>
int queue[100],n,i,front=-1,rear=-1,X,ch;
void insert(); 
void deleteq();
void display();
int main()
{
	printf("enter queue size: ");
	scanf("%d", &n);
	printf("queue operations: 1.insert 2.delete 3.display 4.exit");
	while(1)
	{
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:deleteq();
			       break;
			case 3:display();
			       break;
			case 4:printf("exit fron queue");
			       exit(0);
			default:printf("invalid choice");
		}
	}
return 0;
}
void insert()
{
	if(rear==n-1)
	{
		printf("queue is full");
	}
	else
	{
		rear++;
		printf("\nenter the queue element");
		scanf("%d",&X);
		queue[rear]=X;
		printf("\nelement inserted");
	}
}
void deleteq()
{
	if (front==rear)
	{
		printf("queue is empty");
	}
	else
	{
		front++;
		printf("delete data element is =%d", queue[front] );
	}
}
void display()
{
	if(front==rear)
		printf("queue is empty");
	else
	{
		printf("queue element are:\n");
		for(i=0; i<=rear; i++)
		{
			printf("%d",queue[i]);
		}
	}
}
