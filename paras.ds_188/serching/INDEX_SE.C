#include<stdio.h>
#include<stdio.h>
#define SIZE 5
void main()
{
	  int a[SIZE],i,b;
	  clrscr();
	  for(i=0;i<SIZE;i++)
	  {
		printf("enter your valu [%d]=",i);
		scanf("%d",&a[i]);
	  }
	  printf("enter your index no");
	  scanf("%d",&b);
	  if(b<SIZE)
	  {
		printf("this is your value=%d",a[b]);
	  }
	  else
	  {
		printf("your value is not found please enter valid value");
	  }
	  getch();
}