/* Labs & Assignments of Lecture 3*/
#include "stdio.h"

void main (void)
{

/*******************************************Labs***************************************************/
	
//	/* Lab 1 : Calculate Area / Circumference*/
//	/* Variables to store radius and user choice*/
//	float radius=0;
//	unsigned char choice = 0;
//	/* Request to enter radius value*/
//	printf ("Please enter the radius: ");
//	/* Get the value from the user and store it into the variable "radius"*/
//	scanf("%f",&radius);
//	/*
//	Request to enter the choice wether the user wants to calculate
//	the area or the circumferenece
//	 */
//	printf("If you want to calculate Area -> Press 'A'\nIf you want to calculate Circumference -> Press 'C'\n");
//	fflush(stdin);
//	/* Get the value from the user and store it into the variable "choice"*/
//	scanf("%c",&choice);
//	/* Check what the user wants and taking into consideration typing mistakes*/
//	if ((choice == 'a')||(choice == 'A'))
//	{
//		/* Area of the Circle = Pi * (radius^2) */
//		printf("Area = %f",radius*radius*3.14159265);
//	}
//	else if ((choice == 'c')||(choice == 'C'))
//	{
//		/*Circumference of the Circle = 2 * Pi * radius */
//		printf("Circumference = %f",2*radius*3.14159265);
//	}
//	else
//	{
//		/* User entered a wrong value*/
//		printf("Wrong Choice\n");
//	}

/**********************************************************************************************/

//	/* Lab 2 : Comparing 3 numbers*/
//	/* Variables to store the 3 numbers*/
//	unsigned int num1,num2,num3;
//	/* Request to enter the 3 numbers then storing them into their specified variables*/
//	printf("Please enter the 3 numbers consecutively \n");
//	scanf("%d %d %d",&num1,&num2,&num3);
//	/* If 1st number is larger than 2nd number -> then it can either be larger or smaller than the 3rd number*/
//	if (num1 > num2)
//	{
//		/* If 1st number is larger than the 3rd number -> then it is the largest number*/
//		if (num1 > num3)
//		{
//			printf("The largest value is : %d\n",num1);
//		}
//		/* If 1st number is smaller than the 3rd number -> then the 3rd number is the largest number*/
//		else 
//		{
//			printf("The largest value is : %d\n",num3);
//		}
//	}
//	/* If 2nd number is larger than 1st number -> then it can either be larger or smaller than the 3rd number*/
//	else 
//	{
//		/* If 2nd number is larger than the 3rd number -> then it is the largest number*/
//		if (num2 > num3)
//		{
//			printf("The largest value is : %d\n",num2);
//		}
//		/* If 2nd number is smaller than the 3rd number -> then the 3rd number is the largest number*/
//		else
//		{
//			printf("The largest value is : %d\n",num3);
//		}
//	}

/**********************************************************************************************/

//	/* Lab 3 : Calculate the minimum of 2 numbers*/
//	/* Variables to store the 2 numbers*/
//	unsigned int num1,num2;
//	/* Request to enter the 2 numbers then storing them into their specified variables*/
//	printf("Please enter the 2 numbers consecutively \n");
//	scanf("%d %d",&num1,&num2);
//	/* Check which number is smaller then printing it to the user*/
//	(num1>num2)? printf("The minimum number is : %d\n",num2) : printf("The minimum number is : %d\n",num1);

/**********************************************************************************************/
	
//	/* Lab 4 : Calculate the summation of values between 1 and 99*/
//	/* Variables to store the iterator of the loop and the accumulated value*/
//	unsigned int iterator=0,sum=0;
//	/* Loop to accumulate values from 1 to 99 */
//	for (iterator = 1; iterator <100 ; iterator++)
//	{
//		/* Accumulate the sum of 0 + 1 + 2 + 3 + ....... in the variable "sum"*/
//		sum= sum+iterator;
//	}
//	/* Print the result*/
//	printf("Summation = %d",sum);

/**********************************************************************************************/

//	/* Lab 5 : Calculates the average students degree for any given students number */
//	/* Variables to store the iterator of the loop and the total students number and the degree of each student*/
//	unsigned int iterator, students_num=0;
//	float total_degrees=0, degree =0;
//	/* Request to enter the number of students and storing it into "students_num"*/
//	printf("Please enter the number of students :\n");
//	scanf("%d",&students_num);
//	/* Loop to check on each student*/
//	for (iterator =0 ; iterator < students_num ; iterator++)
//	{
//		/* Request to enter the degree of each student*/
//		printf("Please enter student number (%d) degree :", iterator + 1);
//		scanf("%f",&degree);
//		/* Accumulate degrees and store the result into "total_degrees"*/
//		total_degrees = total_degrees + degree;
//	}
//	/* Calculate the average by dividing (the accumulated value of all degrees) over (the total number of students)*/
//	printf("The average students degree is : %f \n", total_degrees/students_num);

/**********************************************************************************************/

//	/* Lab 6 : Upside down triangle of consecutive numbers*/
//	/* Variables to store the iterators of the loop and nested loop*/
//	unsigned int iter1,iter2;
//	/* Outer loop to print new lines*/
//	for (iter1 =0; iter1< 10 ; iter1++)
//	{
//		/* Inner loop to print numbers starting from the index of the line to the number 9*/
//		for (iter2 = iter1 ; iter2< 10 ; iter2++)
//		{
//			printf("%d ",iter2);
//		}
//		printf("\n");
//	}

/*******************************************Assignment 1***************************************************/

//	/* EX1: Write C Program to Print a Sentence : C Programming*/
//	printf("C Programming\n");

/**********************************************************************************************/

//	/* EX2: Write C Program to Print a Integer Entered by a User*/
//	/* Variable to store the value entered by the user*/
//	unsigned int val;
//	printf("Enter an integer: ");
//	/* Store the value then print it*/
//	scanf("%d",&val);
//	printf("You entered: %d\n",val);

/**********************************************************************************************/

//	/* EX3: Write C Program to Add Two Integers*/
//	/* Variable to store the values entered by the user*/
//	unsigned int num1,num2;
//	printf ("Enter two integers: \n");
//	/* Store the 2 values*/
//	scanf("%d %d",&num1,&num2);
//	/* Print the result*/
//	printf("Sum = %d\n", num1 + num2);

/**********************************************************************************************/

//	/* EX4: Write C Program to Multiply two Floating Point Numbers*/
//	/* Variable to store the values entered by the user*/
//	float num1,num2;
//	/* Store the 2 values*/
//	printf ("Enter two numbers: \n");
// 	scanf("%f %f",&num1,&num2);
//	/* Print the result*/
//	printf("Product:  = %f\n", num1 * num2);	

/**********************************************************************************************/

//	/* EX5: Write C Program to Find ASCII Value of a Character*/
//	/* Variable to store the value entered by the user*/
//	unsigned char val;
//	/* Store the character*/
//	printf ("Enter a character: \n");
//	scanf("%c",&val);
//	/* Print the ASCII value*/
//	printf("ASCII value of %c = %d\n",val,val);
	
/**********************************************************************************************/

//	/*EX6: Write Source Code to Swap Two Numbers*/
//	/* Variable to store the values entered by the user*/
//	float a,b;
//	/* Store the 2 values*/
//	printf ("Enter value of a: ");
//	scanf("%f",&a);
//	printf ("Enter value of b: ");
//	scanf("%f",&b);
//	/* Temporary storage to swap the two numbers*/
//	float temp;
//	/* Old value of a stored in the temporary storage*/
//	temp = a;
//	/* New value of a is the value of old b*/
//	a=b;
//	/* New value of b is old a stored in the temporary storage*/
//	b=temp;
//	/* Print the result*/
//	printf("After swapping, value of a = %f\nAfter swapping, value of b = %f",a,b);

/**********************************************************************************************/

//	/* EX7: Write Source Code to Swap Two Numbers without temp variable*/
//	/* Variable to store the values entered by the user*/
//	float a,b;
//	/* Store the 2 values*/
//	printf ("Enter value of a: ");
//	scanf("%f",&a);
//	printf ("Enter value of b: ");
//	scanf("%f",&b);
//	/* Adding & Subtracting algorithm to swap the two variables*/
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	/* Print the result*/
//	printf("After swapping, value of a = %f\nAfter swapping, value of b = %f",a,b);

/*******************************************Assignment 2***************************************************/

//	/* EX1 : Write a C Program to Check Whether the Number is Even or Odd*/
//	/* Variable to store the value entered by the user*/
//	unsigned int val;
//	/* Store the value*/
//	printf ("Enter an integer you want to check: ");
//	scanf("%d",&val);
//	/* If the number is even then the remainder is zero when divided by 2 */
//	(val%2 == 0)? printf("%d is even\n",val) : printf("%d is odd\n",val);

/**********************************************************************************************/

//	/* EX2 : Write a C Program to Check Vowel or Consonant*/
//	/* Variable to store the value entered by the user*/
//	unsigned char val;
//	/* Store the value*/
//	printf ("Enter an alphabet: ");
//	scanf("%c",&val);
//	/* If the character is (a,e,i,o or u) then it's a vowel*/
//	if ( (val == 'a') || (val == 'e') || (val == 'i') || (val == 'o') || (val == 'u') || (val == 'A') || (val == 'E') || (val == 'I') || (val == 'O') || (val == 'U') )
//	{
//		printf("%c is a Vowel\n",val);
//	}
//	else 
//	{
//		printf("%c is a Consonant\n",val);
//	}

/**********************************************************************************************/

//	/* EX3 : Write a C Program to Find the Largest Number Among Three Numbers*/
//	/* Variables to store the 3 numbers*/
//	float num1,num2,num3;
//	/* Request to enter the 3 numbers then storing them into their specified variables*/
//	printf("Please enter the 3 numbers consecutively \n");
//	scanf("%f %f %f",&num1,&num2,&num3);
//	/* If 1st number is larger than 2nd number -> then it can either be larger or smaller than the 3rd number*/
//	if (num1 > num2)
//	{
//		/* If 1st number is larger than the 3rd number -> then it is the largest number*/
//		if (num1 > num3)
//		{
//			printf("The largest value is : %f\n",num1);
//		}
//		/* If 1st number is smaller than the 3rd number -> then the 3rd number is the largest number*/
//		else 
//		{
//			printf("The largest value is : %f\n",num3);
//		}
//	}
//	/* If 2nd number is larger than 1st number -> then it can either be larger or smaller than the 3rd number*/
//	else 
//	{
//		/* If 2nd number is larger than the 3rd number -> then it is the largest number*/
//		if (num2 > num3)
//		{
//			printf("The largest value is : %f\n",num2);
//		}
//		/* If 2nd number is smaller than the 3rd number -> then the 3rd number is the largest number*/
//		else
//		{
//			printf("The largest value is : %f\n",num3);
//		}
//	}

/**********************************************************************************************/

//	/* EX4: Write a C Code to Check Whether a Number is Positive or Negative*/
//	/* Variable to store the value entered by the user*/
//	int val;
//	/* Store the value*/
//	printf ("Enter an integer you want to check: ");
//	scanf("%d",&val);
//	/* Most Significant Bit in a signed integer says if it's a positive or a negative number (1 -> negative , 0 -> positive)*/
//	if (val == 0)
//	{
//		printf("You entered Zero\n");
//	}
//	else if (((1<<((sizeof(val) * 8) - 1)) & val ) != 0)
//	{
//		printf("%d is Negative\n",val);
//	}
//	else 
//	{
//		printf("%d is Positive\n",val);
//	}

/**********************************************************************************************/

//	/* EX5: Write a C Program to Check Whether a Character is an Alphabet or not*/	
//	/* Variable to store the value entered by the user*/
//	unsigned char val;
//	/* Store the value*/
//	printf ("Enter an integer you want to check: ");
//	scanf("%c",&val);
//	/* Check if the character is between 'a' & 'z' or not*/
//	if(((val > 'a' )&&(val < 'z' )) || ((val > 'A' )&&(val < 'Z' )))
//	{
//		printf("%c is an alphabet\n",val);
//	}
//	else
//	{
//		printf("%c is not an alphabet\n",val);
//	}

/**********************************************************************************************/

//	/* EX6: Write a C Program to Calculate the Sum of Natural Numbers*/	
//	/* Variable to store the iterator and the accumulated value and the limit of summation*/
//	unsigned int sum=0,iter,limit;
//	/* Store the value*/
//	printf ("Enter an integer: ");
//	scanf("%d",&limit);
//	/* Loop to accumulate values until they reach the limit*/
//	for(iter = 1 ; iter <= limit ; iter++)
//	{
//		/* Accumulate the value*/
//		sum = sum + iter;
//		
//	}
//	/* Print the result*/
//	printf("Sum = %d\n",sum);

/**********************************************************************************************/

//	/* EX7: Write a C Program to Find Factorial of a Number*/
//	/* Variable to store the iterator and the value entered by the user and result of the factorial*/
//	unsigned int fact=1, iter;
//	signed int n;
//	/* Request to enter the wanted factorial*/
//	printf("Enter an integer: ");
//	scanf("%d",&n);
//	/* It's possible that the user entered a negative number by mistake, in that case we should print an error message*/
//	if ( n < 0)
//	{
//		/* Error Message*/
//		printf("Error!!! Factorial of negative number doesn't exist\n");
//	}
//	else
//	{
//	/* Loop to multiply values from 1 to n */
//	for (iter = n ; iter>0 ; iter --)
//	{
//		/* Calculate the factorial*/
//		fact = fact * iter;
//	}
//		/* Print the result*/
//		printf("Factorial = %d\n",fact);	
//	}

/**********************************************************************************************/

//	/* EX8: Write a C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide using switch...case*/
//	/* Variables to store the operator and operands entered by the user*/
//	float operand1,operand2;
//	unsigned char operator;
//	/* Request to enter the operator and operands*/
//	printf("Enter operator either + or - or * or / \n");
//	scanf("%c",&operator);
//	printf("Enter two operands: \n");
//	scanf("%f %f",&operand1,&operand2);
//	/* Switch on the operator to perform the arithmetic operation requested*/
//	switch (operator)
//	{
//		/* Perform the addition operation*/
//		case '+' : 
//		{
//			printf ("%f + %f = %f \n",operand1,operand2,operand1+operand2);
//			break;	
//		}
//		/* Perform the subtraction operation*/
//		case '-' : 
//		{
//			printf ("%f - %f = %f \n",operand1,operand2,operand1-operand2);
//			break;	
//		}
//		/* Perform the multiplication operation*/
//		case '*' : 
//		{
//			printf ("%f * %f = %f \n",operand1,operand2,operand1*operand2);
//			break;	
//		}
//		/* Perform the division operation*/
//		case '/' : 
//		{
//			printf ("%f / %f = %f \n",operand1,operand2,operand1/operand2);
//			break;	
//		}
//		/* The user entered a wrong character -> display error message*/
//		default : 
//		{
//			printf("Error!! You entered a wrong operator\n");
//			break;	
//		}
//	}
	
	return;
}