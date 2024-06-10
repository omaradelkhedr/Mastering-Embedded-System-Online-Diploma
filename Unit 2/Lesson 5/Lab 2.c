#include "stdio.h"

/* Lab 2: Calculate the minimum value in a given array*/

/* Prototype of the fucntion*/
int calcMin(int values[],int n);

int main(void)
{
	/* Array that contains the numbers*/
	unsigned int arr[10]={0};
	/* Loop to fill the array*/
	unsigned char iter;
	for (iter=0;iter<10;iter++)
	{
		/* Request to enter the data*/
		printf("Please enter element number %d: ",iter+1);
		scanf("%d",&arr[iter]);
	}
	/* Call the calcMin function and print the result*/
	printf("The minimum value of the given values is: %d\n",calcMin(arr,10));
	return 0;
}

/* Function definition*/
int calcMin(int values[],int n)
{
	/* Return variable that holds the minimum value */
	int return_val = values[0];
	/* Loop to check all the elements*/
	unsigned char iter;
	for (iter=1;iter<n;iter++)
	{
		/* Check if the number is lower than the return value --> store it into the return variable*/
		if (values[iter]<return_val)
		{
			return_val = values[iter];
		}
	}
	/*return the minimum value*/
	return return_val;
}