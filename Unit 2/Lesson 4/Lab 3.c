#include "stdio.h"

/* Lab 3: Calculate and print the transpose of 3x3 matrix*/
int main (void)
{
	/* Arrays to store the matrix and its transpose*/
	float matrix[3][3],t_matrix[3][3];
	/* Loop to store the matrix from the user*/
	unsigned char iter1,iter2;
	for (iter1 = 0 ; iter1 < 3 ; iter1 ++)
	{
		for (iter2 =0 ; iter2 <3 ; iter2++)
		{
			/* Request data from the user*/
			printf("Enter element (%d,%d): ",iter1+1,iter2+1);
			scanf("%f",&matrix[iter1][iter2]);			
		}
	}
	/* Loop to print the original stored matrix*/
	printf("The Original Matrix is : \n");
	for (iter1 = 0 ; iter1 < 3 ; iter1 ++)
	{
		for (iter2 =0 ; iter2 <3 ; iter2++)
		{
			/* Print stored matrix*/
			printf("%f ",matrix[iter1][iter2]);
		}
		printf("\n");
	}
	/* Loop to calculate the transpose matrix*/
	for (iter1=0;iter1<3;iter1++)
	{
		for (iter2 = 0; iter2<3 ; iter2++)
		{
			t_matrix[iter1][iter2] = matrix[iter2][iter1];
		}
	}
	/* Loop to print the transpose matrix*/
	printf("The Transpose Matrix is : \n");
	for (iter1 = 0 ; iter1 < 3 ; iter1 ++)
	{
		for (iter2 =0 ; iter2 <3 ; iter2++)
		{
			/* Print stored matrix*/
			printf("%f ",t_matrix[iter1][iter2]);
		}
		printf("\n");
	}
	
	return 0;
}