#include "stdio.h"
/* Lab 1: Store and Print 10 Student degrees*/
int main (void)
{
	/* Array to store the degrees of students*/
	float degrees[10]= {0};
	/* Loop to store all student degrees*/
	unsigned char iter;
	for (iter = 0 ; iter <10 ; iter++)
	{
		/* Request to enter degrees of students*/
		printf("Enter student %d degree: ",iter+1);
		scanf("%f",&degrees[iter]);
	}
	/* Loop to print all degrees*/
	for (iter = 0 ; iter <10 ; iter++)
	{
		/* Print stored degrees*/
		printf("Student %d degree: %f\n",iter+1,degrees[iter]);
	}
	return 0;
}
