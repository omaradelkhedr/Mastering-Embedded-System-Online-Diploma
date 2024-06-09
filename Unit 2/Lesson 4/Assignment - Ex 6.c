#include "stdio.h"

/* Ex 6: Write a C Program to find the frequency of a character in a string*/
int main(void)
{
	/* Define a string to store the text*/
	unsigned char text[30];
	/* Character requested by the user*/
	unsigned char character;
	unsigned int count=0;
	/* Request the text from the user*/
	printf("Please enter the text : \n");
	gets(text);
	/* Request the character from the user*/
	printf("Please enter the character: ");
	scanf("%c",&character);
	/* Loop to search for the character and count how many times it was repeated*/
	unsigned char iter=0;
	while (text[iter])
	{
		/* Loop will terminate when it reaches null character (end of sentence)*/
		if (text[iter] == character)
		{
			/* Found the requested character -> increment counter*/
			count ++;
		}
		iter++;
	}
	/* Print the result*/
	printf ("The Character %c was repeated %d times",character,count);
	return 0;
}