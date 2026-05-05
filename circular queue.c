#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front=-1,rear=-1;
int isfull()
{
	return (rear+1)%MAX_SIZE==front;
}
int isEmpty()
{
	return front==-1;
}
void enqueue()
{
	int data;
	printf("\n enter element");
	scanf("%d",&data);
	if(isfull())
	{
		printf("queue overflow \n");
		return ;
	}
	if(front==-1)
	{
		front =0;
	}
	rear =(rear+1)% MAX_SIZE;
	queue[rear]=data;
	printf("element %d inserted \n",data);
}
void dequeue()
{
	if (isEmpty())
	{
		printf("queue underflow \n");
		return;
	}
	int data= queue [front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%MAX_SIZE;
	}
	printf("\n deleted element %d",data);
}
void display()
{
	if (isEmpty())
	{
		printf("queue is empty \n");
		return;
	}
	printf("queue elements :");
	int i= front;
	while(i!=rear)
	{
		printf("%d",queue[i]);
		i=((i+1)%MAX_SIZE);
	}
	printf("%d \n",queue[rear]);
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n\t\t\t QUEUE OPERATIONS ARE");
		printf("\n\t\t\t\t  1.Insert");
		printf("\n\t\t\t\t  2.Delete");
		printf("\n\t\t\t\t  3.Display");
		printf("\n\t\t\t\t  4.exit");
		printf("\n\t\t  enter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				 enqueue();
				 break;
			case 2:
				dequeue();
				break;
		    case3:
		    	display();
		    	break;
		    case 4: 
		         exit(0);
		         break;
		    default: printf("\n INVALID CHOICE,try again");
		}
	}
}

