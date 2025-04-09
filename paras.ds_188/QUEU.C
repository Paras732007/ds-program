#include<stdio.h>
#define size 5
int queu[size];
int front=0,rear=0;
void insert();
void delet();
void display();
void main()
{
	  int choice;
	  do{
	  clrscr();
	  printf("1 insert\n");
	  printf("2 delet\n");
	  printf("3 display\n");
	  printf("0 exit\n");
	  printf("enter your choice");
	  scanf("%d",&choice);
	  switch (choice)
	  {
		case 1:insert();
		break;
		case 2:delet();
		break;
		case 3:display();
		break;
		case 0:
		printf("ok");
		break;
		default:
		printf("invalid choice");
	  }
	  getch();
	}
	while(choice!=0);
}
void insert()
{
	if(rear==size)
	{
		printf("queu is full");
	}
	else
	{
		printf("\nenter any nomber");
		scanf("%d",&queu[rear]);
		printf("add success fully");
		rear++;
	}
}
void delet()
{
	if(rear==0)
	{
		printf("queu is empty");
	}
	else
	{
		printf("\ndelet element is=%d",queu[front]);
	}
	if(front==rear)
	{
		front=0,rear=0;
	}
	else
	{
		front++;
	}
}
void display()
{
	int a;
	if(rear==0)
	{
		printf("queu is empty");
	}
	else
	{
		for(a=0;a<rear;a++)
		{
			printf("\n%d",queu[a]);
		}
	}
}