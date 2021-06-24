#include "holberton.h"
#include "stdio.h"
/**
* main - This function show the numbers in fibo
*
*
* Return: Returns 0
*/

int main(void)
{

	int fibo[50];
	int i;


	for (i = 0; i <= 50 ; i++)
	{
		if (i == 0)
		{
			fibo[i] = i;
		}
		else
		{
			fibo[i] = fibo[i - 2] + fibo[i - 1];
		}
		printf("%d, ", fibo[i]);
	return (0);
	}
}
