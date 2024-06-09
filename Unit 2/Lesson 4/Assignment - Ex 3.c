#include "stdio.h"

/* Write a C Program to find Transpose of a matrix*/
int main (void)
{
	/* Arrays to store the matrix and its transpose*/
	float matrix[5][5],t_matrix[5][5];
	/* Variables to store size of the matrix*/
	unsigned int rows,columns;
	/* Request to enter the size of the matrix*/
	printf("Please enter the number of rows then the number of columns consecutively: \n");
	scanf("%d %d",&rows,&columns);
	/* Loop to store the matrix from the user*/
	unsigned char iter1,iter2;
	for (iter1 = 0 ; iter1 < rows ; iter1 ++)
	{
		for (iter2 =0 ; iter2 <columns ; iter2++)
		{
			/* Request data from the user*/
			printf("Enter element (%d,%d): ",iter1+1,iter2+1);
			scanf("%f",&matrix[iter1][iter2]);			
		}
	}
	/* Loop to print the original stored matrix*/
	printf("The Original Matrix is : \n");
	for (iter1 = 0 ; iter1 < rows ; iter1 ++)
	{
		for (iter2 =0 ; iter2 <columns ; iter2++)
		{
			/* Print stored matrix*/
			printf("%f ",matrix[iter1][iter2]);
		}
		printf("\n");
	}
	/* Loop to calculate the transpose matrix*/
	for (iter1=0;iter1<columns;iter1++)
	{
		for (iter2 = 0; iter2<rows ; iter2++)
		{
			t_matrix[iter1][iter2] = matrix[iter2][iter1];
		}
	}
	/* Loop to print the transpose matrix*/
	printf("The Transpose Matrix is : \n");
	for (iter1 = 0 ; iter1 < columns ; iter1 ++)
	{
		for (iter2 =0 ; iter2 <rows ; iter2++)
		{
			/* Print stored matrix*/
			printf("%f ",t_matrix[iter1][iter2]);
		}
		printf("\n");
	}
	
	return 0;
}