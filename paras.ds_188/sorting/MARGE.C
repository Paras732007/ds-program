#include<stdio.h>
#include<conio.h>
#define size 5
void marge(int arr[],int low ,int mid,int high)
{
	int i=low;
	int j=mid +1;
	int k=low;
	int a[100];
	int c;

	while(i<=mid &&j<=high)
	{
		if(arr[i]<arr[j])
		{
			a[k]=arr[i];
			k++,i++;
		}
		else
		{
			a[k]=arr[j];
			k++,j++;
		}
	}
	while(i<=mid)
	{
		a[k]=arr[j];
		k++,i++;
	}
	while(j<=high)
	{
		a[k]=arr[j];
		k++,j++;
	}
	for(c=low;c<=high;c++)
	{
		arr[c]=a[c];
	}

}
void margesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		margesort(arr,low,mid);
		margesort(arr,mid+1,high);
		marge(arr,low,mid,high);
	}
}
void main()
{
	  int i,arr[size];
	  int n;
	  clrscr();
	  for(i=0;i<size;i++)
	  {
		printf("enter value for [%d]",i);
		scanf("%d",&arr[i]);
	  }
	  n=sizeof(arr)/sizeof(arr[0]);
	  margesort(arr,0,n-1);
	  for(i=0;i<size;i++)
	  {
		printf("\n%d",arr[i]);
	  }
	  getch();
}