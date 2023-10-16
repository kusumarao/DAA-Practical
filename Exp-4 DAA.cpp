#include<stdio.h>
int findLargest(int arr[], int size)
{
	if(size <= 0)
	{
		printf("Array is empty or has in valid size.\n");
		return -1;
	}
	int Largest = arr[0];
	for(int i = 1; i < size; i++)
	{
		if(arr[i]>Largest)
		{
			Largest = arr[i];
		}
	}
	return Largest;
}
int main()
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	if(size <= 0)
	{
		printf("Invalid array size.\n");
		return 1;
	}
	int arr[size];
	printf("Enter %d element: \n", size);
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	int Largest = findLargest(arr, size);
	if(Largest != -1)
	{
		printf("The Largest element in the array is: %d\n", Largest);
		
	}
	return 0;
}
