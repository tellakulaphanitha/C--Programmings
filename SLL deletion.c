#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*link;
};
struct node *start=NULL,*temp,*last,*t1,*t2;
void firstdelete()
{
	if(start==NULL)
	{
		printf("\n\t Linked list is empty ,no nodes to perform ");
	}
	else
	{
		start=start->link;
		printf("\n\t first node is deleted successfully");
	}
}
void lastdelete()
{
	if(start==NULL)
	{
	
     printf("\n\t no nodes in linked lsit to delete");
    }  
	else
	{
		t1=start;
		while(t1->link!=NULL)
		{
			t2=t1;
			t1=t1->link;
		}
		t2->link=NULL;
		last=t2;
	}
	
}
void middledelete()
{
	int pos ,i=1;
	printf("\n enetr the posoition to delete the node");
	scanf("%d",&pos);
	if(start==NULL)
	printf("\n\t np element to delte");
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		t2->link=t1->link;
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
		printf("\n\n\t\t1.first delete");
		printf("\n\n\t\t2.last delete");
		printf("\n\n\t\t3.middle delete");
		printf("\n\n\t\t7.display");
		printf("\n\n\t enter your choice....");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: firstdelete(); break;
			case 2: lastdelete();  break;
			case 3: middledelete();break;
			case 4: display();      break;
			case 5: exit(0); 
		}
	}
	return 0;
}
