#include "stdio.h"

/* Ex 7: Calculate the length of a string manually*/
int main (void)
{
	/* Define a string*/
	unsigned char text[30];
	/* Request a string from the user*/
	printf("Please enter any text: ");
	gets(text);
	/* A loop to count characters of a string*/
	unsigned char count;
	while (text[count])
	{
		/* counter will keep counting until it reaches null character which is a value 0 -> that terminates the loop*/
		count++;
	}
	/* Print the result*/
	printf("Number of characters in the previous text is : %d",count);
	return 0;
}