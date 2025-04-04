// C program for implementation of selection sort
#include <stdio.h>
#define SIZE 5
void selectionSort(int arr[], int n) 
{
	int i,j,k,temp;
    for (i = 0; i < n - 1; i++) 
	{
        int k = i;
        
        // Iterate through the unsorted portion
        // to find the actual minimum
        for (j=i+1;j<n;j++) 
		{
            if (a[j]< a[k]) {
              
                // Update min_idx if a smaller element is found
                k = j;
            }
        }
        
        // Move minimum element to its
        // correct position
        int temp = a[i];
        a[i] = a[min_idx];
        a[k] = temp;
    }
}

void main() 
{
    int a[SIZE],i,j,n;
    for(i=0;i<SIZE;i++)
	{
    printf("enter your value ");
    scanf("%d",&a[i]);
	}
    selectionSort(a, SIZE);
    printf("after sorting");
	for(j=0;j<SIZE;j++)
	{
    printf("\n\t%d",a[j]);
	}
    grtch();
}