#include "stdio.h"

/*
 * Quiz : Search and count the number of values that satisfies the following condition:
 * The previous and the next values is lower than the centre value
 */
int main (void)
{
	/* Create an array of 1000 elements*/
	unsigned int values[1000]={0};
	/* A counter that counts the number of required values*/
	unsigned int count=0;
	/* Loop Fill the array with random numbers*/
	unsigned int iter;
	for (iter =0 ; iter<1000 ; iter++)
	{
		values[iter]=rand();
	}
	/* Loop on values from index 1 -> 998*/
	unsigned int req_values[1000]={0};
	for (iter = 1 ; iter <999 ; iter++)
	{
		/* check the previous and the next value*/
		if ((values[iter-1] < values[iter]) && (values[iter+1] < values[iter]))
		{
			req_values[count++]=values[iter];
		}
	}
	/* Print the required values and their count*/
	printf("The number of values = %d\n",count);
	for (iter=0 ; iter < count ; iter++)
	{
		printf("%d ",req_values[iter]);
	}
	
	
	return 0;
}