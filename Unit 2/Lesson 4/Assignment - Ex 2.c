#include "stdio.h"

/* Ex 2: Write a C Program to average using arrays*/
int main (void)
{
	/* Define number of elements entered by the user*/
	unsigned char n;
	float arr[255];
	/* Request to enter the number of elements n*/
	printf("Please enter the number of elements: ");
	scanf("%d",&n);
	/* Loop to store the elements*/
	unsigned char iter;
	for (iter =0 ; iter < n ; iter ++)
	{
		/* Request to enter the elements*/
		printf("Please enter number: ");
		scanf("%f",&arr[iter]);
	}
	/* Loop to calculate sum & average*/
	for (iter =1 ; iter <n ; iter++)
	{
		/* Accumulate the sum in element [0]*/
		arr[0] = arr[0] + arr[iter];
	}
	/* Average = Sum/n */
	printf("Average is : %f\n", arr[0]/n);
	return 0;
}