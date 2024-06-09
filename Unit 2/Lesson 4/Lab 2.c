#include "stdio.h"

/* Lab 2: Calculate polynomial values for a set of inputs*/
int main (void)
{
	/* Define set of inputs*/
	float x[5]= {5,16,22,3.5,15};
	/* Variable to store the result of the function y(x)= ....*/
	float y;
	/* Loop to calculate each polynomial according to its input*/
	unsigned char iter;
	for (iter=0; iter<5; iter++)
	{
		/* y(x) = 5x^2 + 3x +2*/
		y = x[iter] * x[iter] * 5 + x[iter] * 3 + 2;
		printf("Y(%f) = %f\n",x[iter],y);
	}
	return 0;
}