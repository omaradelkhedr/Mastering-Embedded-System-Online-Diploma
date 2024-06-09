#include "stdio.h"
#include "string.h"
/* Ex 8: Write a C Program to reverse a string*/

int main (void)
{
	/* Define a string to store the text*/
	unsigned char text[30];
	/* Number of characters*/
	unsigned char num_char;
	/* Reversed String*/
	unsigned char rev_text[30];
	/* Request the text from the user*/
	printf("Please enter the text : \n");
	gets(text);	
	/* Find the length of the string*/
	num_char = strlen(text);
	/* Loop to store each element in reverse order*/
	unsigned char iter;
	for (iter=0;iter<num_char;iter++)
	{
		rev_text[iter] = text[num_char - iter - 1];
	}
	/* Terminate a string with null character*/
	rev_text[iter] = '\0';
	/* Print the result*/
	printf("Reverse String is : %s\n",rev_text);
	
	return 0;
}