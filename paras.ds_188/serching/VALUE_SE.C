#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main()
{
	  int a[SIZE],i,b,c=0;
	  clrscr();
	  for(i=0;i<SIZE;i++)
	  {
		printf("enter your value[%d]=",i);
		scanf("%d",&a[i]);
	  }
	  printf("enter your serching value=");
	  scanf("%d",&b);
	  for(i=0;i<SIZE;i++)
	  {
		if(a[i]==b)
		{
			printf("thid is your value[%d]=%d\n",i,a[i]);
			c++;
		}
	  }
	  if(c==0)
	  {
		printf("value not found");
	  }
	  getch();
}
