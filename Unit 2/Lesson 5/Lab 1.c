#include "stdio.h"

/* Lab 1: Write a function to calculate factorial*/

/* Prototype of factorial function*/
unsigned int fact (unsigned int n);

int main(void)
{
	signed int n;
	/* Request to enter the wanted factorial*/
	printf("Enter an integer: ");
	scanf("%d",&n);
	/* Print the result*/
	printf("Factorial = %d\n",fact(n));	
	return 0;
}

unsigned int fact (unsigned int n)
{
	/* Variable to store the iterator and the value entered by the user and result of the factorial*/
	unsigned int fact=1, iter;
	/* It's possible that the user entered a negative number by mistake, in that case we should print an error message*/
	if ( n < 0)
	{
		/* Error Message*/
		printf("Error!!! Factorial of negative number doesn't exist\n");
	}
	else
	{
	/* Loop to multiply values from 1 to n */
	for (iter = n ; iter>0 ; iter --)
	{
		/* Calculate the factorial*/
		fact = fact * iter;
	}
	}
	/* Return the result*/
	return fact;
}

	