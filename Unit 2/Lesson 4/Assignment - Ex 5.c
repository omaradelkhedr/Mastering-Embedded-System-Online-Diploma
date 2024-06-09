#include "stdio.h"

/* Ex 5: Write a C Program to search an element in an array*/
int main (void)
{
	/* Define an array */
	unsigned int arr[10];
	/* Element the user want to search*/
	unsigned int element;
	/* Request to enter the number of elements*/
	unsigned char n;
	printf("Please enter the number of elements: ");
	scanf("%d",&n);
	/* Loop to enter values in the array*/
	unsigned char iter;
	for (iter =0 ; iter <n ; iter++)
	{
		arr[iter]= iter * 11;
	}
	/* Print the array*/
	for (iter =0 ; iter <n ; iter++)
	{
		printf("%d ",arr[iter]);
	}
	/* Request to enter the elemnt*/
	printf("\nPlease enter the number you want to search for: ");
	scanf("%d",&element);
	/* Loop to search for the element*/
	for (iter=0;iter<n;iter++)
	{
		if (arr[iter] == element)
		{
			break;
		}
	}
	/* Print the location of the number*/
	printf("The number is in location: %d\n",iter+1);
	return 0;
}