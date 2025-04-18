#include <stdio.h>
#include <conio.h>
#define SIZE 5
void merge(int arr[], int low, int , int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i=0;i<n1;i++)
	L[i]=arr[l+i];
    for (j=0;j<n2;j++)
	R[j]=arr[m+1+j];

    // Merge the temp arrays back into arr[l..r
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
	if (L[i] <= R[j]) {
	    arr[k] = L[i];
	    i++;
	}
	else {
	    arr[k] = R[j];
	    j++;
	}
	k++;
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1) {
	arr[k] = L[i];
	i++;
	k++;
    }

    // Copy the remaining elements of R[],
    // if there are any
    while (j < n2) {
	arr[k] = R[j];
	j++;
	k++;
    }
}

// l is for left index and r is right index of the
// sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
	int m = l + (r - l) / 2;

	// Sort first and second halves
	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);

	merge(arr, l, m, r);
    }
}

// Function to print an array
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
	printf("%d ", A[i]);
    printf("\n");
}

// Driver code
int main()
{
    int arr[SIZE];
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, SIZE - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
