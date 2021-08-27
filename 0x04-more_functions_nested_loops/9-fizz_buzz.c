#include "main.h"
/**
 * is_m3 - this function can tell if a number is mul of 3
 * @i: the variable to compare
 *
 * Return: returns 1 if it is true 0 otherwise
 */


int is_m3(int i)
{
	if ((i % 3) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * is_m5 - this function can tell if a number is mul of 5
 * @i: the variable to compare
 *
 * Return: returns 1 if it is true 0 otherwise
 */

int is_m5(int i)
{
	if ((i % 5) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
* is_m3_m5 - this function can tell if a number is mul of 3 and 5
* @i: the variable to compare
*
* Return: returns 1 if it is true 0 otherwise
*/

int is_m3_m5(int i)
{
	if (((i % 3) == 0) && ((i % 5) == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* main - this function show the number from 1 to 100 and changes to text if the
* number is mul of 3 or 5 and both of them
*
* Return: returns 0.
*
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (is_m3_m5(i) == 1)
		{
			printf("FizzBuzz ");
		}
		else if (is_m5(i) == 1)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (is_m3(i) == 1)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
