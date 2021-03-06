
#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
//Bubble Sort is the simplest sorting algorithm that is works by repeatedly swapping the adjacent elements if they are in wrong order.
//complexcity: Worst complexity: n^2 //
//Average complexity: n^2//
//Best complexity: n//
//Space complexity: 1 //
// A function to implement in bubble sort
// bubble sort algorithm is very easy as compared to all sorting algorithms.
// The “bubble” sort is called so because the list elements with greater value than their surrounding an elements “bubble” towards the end of the list. 
void bubbleSort(int arr[], int n)
{
	int i, j,flag = 0;
	for (i = 0; i < n-1; i++)	
	{
		flag = 0;
	// Last i elements are already in place
		for (j = 0; j < n-i-1; j++)
	     		{
		 		if (arr[j] > arr[j+1])
				{
					swap(&arr[j], &arr[j+1]);
					flag = 1;
				}
	     		} 
		if(flag == 0)
		{
			break;
		}
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}

// This code is contributed by shakti
