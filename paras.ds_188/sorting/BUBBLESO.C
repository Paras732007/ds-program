#include<stdio.h>
#define SIZE 5
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void main()
{
	  int a[SIZE],i,n;
	  clrscr();
	  for (i=0;i<SIZE;i++)
	  {
		     printf("enter your value=");
		     scanf("%d",&a[i]);
	  }
	  bubblesort(a,SIZE);
	  printf("after sorting");
	  for(i=0;i<SIZE;i++)
	  {
		printf("\n\t %d",a[i]);
	  }
	  getch();
}