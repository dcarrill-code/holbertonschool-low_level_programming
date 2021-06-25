#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - This main fuction can tell when a number is positive or negative
*
* Return: Returns a text telling if the number is positive or negative
* betty style doc for function main goes there */
void positive_or_negative(int i)
{

	if (i > 0)
	{

		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);

	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}

}
