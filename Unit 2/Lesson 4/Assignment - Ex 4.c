#include "stdio.h"

/* Ex 4: Write a C Program to insert an elemnt in an Array*/
int main (void)
{
	/* Define the Array*/
	unsigned int arr[10];
	/* Define the inserted element*/
	unsigned int element,location;
	/* Request to enter the number of elements*/
	unsigned char n;
	printf("Please enter the number of elements : ");
	scanf("%d",&n);
	/* Loop to store random elements*/
	unsigned char iter;
	for (iter=0;iter<n;iter++)
	{
		arr[iter] = rand();
	}
	/* Request to enter the element to be inserted and where it is inserted*/
	printf("Please enter the element to be inserted : ");
	scanf("%d",&element);
	printf("Please enter the location : ");
	scanf("%d",&location);
	 /* Loop to shift the elements*/
	 for (iter= n-1; iter > location ; iter --)
	 {
		 arr[iter+1] = arr [iter] ;
	 }
	 /* Insert the element in the required location*/
	 arr[location] = element;
	 for (iter=0;iter<n+1;iter++)
	 {
		 printf("%d ",arr[iter]);
	 }
	return 0;
}