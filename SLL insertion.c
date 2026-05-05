#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*link;
};
struct node *start=NULL,*temp,*last,*t1,*t2;
void firstinsert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
	}
}
void lastinsert()
{
	int e;
	temp=(struct node*)malloc(sizeof (struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		last->link=temp;
		last=temp;
	}
}
void middleinsert()
{
	int e,pos,i=1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	printf("enter the position to insert");
	scanf("%d",&pos);
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		printf("\n inside of middle insert fun");
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		temp->link=t2->link;
		t2->link=temp;
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\n no elements in linked list");
	}
	else
	{
		printf("\n\t linked list elements are");
		temp=start;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	int ch,k;
	while(1)
	{
		printf("\n\t\t\t LINKED LIST OPERATIONS");
		printf("\n\n\t\t1.first insert");
		printf("\n\n\t\t2.last insert");
		printf("\n\n\t\t3.middle insert");
		printf("\n\n\t\t7.display");
		printf("\n\n\t enter your choice....");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: firstinsert(); break;
			case 2: lastinsert();  break;
			case 3: middleinsert();break;
			case 4: display();      break;
			case 5: exit(0); 
		}
	}
	return 0;
}
