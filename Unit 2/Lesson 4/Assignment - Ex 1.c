#include "stdio.h"

/* Ex1 : Write a C program to find the sum of two matrix of order 2x2*/
int main (void)
{
	/* Define the two matrices*/
	float matrixA[2][2] = {0};
	float matrixB[2][2] = {0};
	/* Sum Matrix*/
	float result_matrix[2][2]= {0};
	/* Loop to store the values into them */
	unsigned char iter;
	unsigned char iter2;
	for (iter=0;iter<2;iter++)
	{
		for (iter2 =0 ; iter2<2 ; iter2++)
		{
		/* Request values from the user*/
		printf("Please enter element (%d,%d) of matrix A: ",iter+1,iter2+1);
		scanf ("%f",&matrixA[iter][iter2]);		
		}
	}
	for (iter=0;iter<2;iter++)
	{
		for (iter2 =0 ; iter2<2 ; iter2++)
		{
		/* Request values from the user*/
		printf("Please enter element (%d,%d) of matrix B: ",iter+1,iter2+1);
		scanf ("%f",&matrixB[iter][iter2]);		
		}
	}
	/* Loop to add each element*/
	for (iter=0;iter<2;iter++)
	{
		for (iter2 =0 ; iter2<2 ; iter2++)
		{
		/* a11 + b11 , a12 + b12 , ...... */
		result_matrix[iter][iter2] = matrixA[iter][iter2] + matrixB[iter][iter2];	
		}
	}
	/* Loop to print the result*/
	printf("Sum of 2 matrices: \n");
	for (iter=0;iter<2;iter++)
	{
		for (iter2 =0 ; iter2<2 ; iter2++)
		{
		/* Request values from the user*/
		printf("%f ",result_matrix[iter][iter2]);		
		}
		printf("\n");
	}
	return 0;
}