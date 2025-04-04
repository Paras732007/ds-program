// Binary Search in C
#include <stdio.h>
#define SIZE 5
void main()
{
  int array[SIZE];
  int i,result,x,low,high;
  int j,temp;
  clrscr();
  for(i=0;i<SIZE;i++)
  {
	printf("enter your value[%d]",i);
	scanf("%d",&array[i]);
  }
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
  printf("enter serching value");
  scanf("%d",&x);
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (x == array[mid])
      printf("this is your value=%d",mid);

    if (x > array[mid])
      low = mid + 1;

    else
      high = mid - 1;
  }
  getch();
}