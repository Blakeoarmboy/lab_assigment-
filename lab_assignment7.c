#include <stdio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
// A function to implement bubble sort
// A function to implement bubble sort
void printArray(int arr[], int size);

int bubbleSort(int arr[], int n)
{
	printf("\nUsing Bubble sort\n\n");
	int amount = 0;
	int i, j,temp;
	for (i = 0; i < n-1; i++)
	{
		printf("Iteration# %d\n",i+1);
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{//then swap
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				amount++;
			}
			printArray(arr, n);
		}
	}
	return amount;
}
/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
// Driver program to test above functions
int main()
{
	int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
	int n = 5; //size of the array
	printf("Array bofore sorting: \n");
	printArray(arr, n);
	printf("%d ",bubbleSort(arr, n));
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}