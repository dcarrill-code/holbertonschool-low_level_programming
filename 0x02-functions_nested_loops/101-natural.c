#include "holberton.h"
#include "stdio.h"
/**
* multiples_of_3 - this function find all the multiples of 3 and add them
* @s3: Is the variable that contains the sum
*
* Return: Returns the sum of all the multiples of 3
*/
int multiples_of_3(int s3)
{
	int i;

	for (i = 3 ; i < 1024 ;)
	{
		i += 3;
		s3 += i;
	}
	return (s3);
}
/**
* multiples_of_5 - this function find all the multiples of 5 and add them
* @s5: Is the variable that contains the sum
*
* Return: Returns the sum of the multiples of 5
*/
int multiples_of_5(int s5)
{
	int i;

	for (i = 5 ; i < 1024 ;)
	{
		i += 5;
		s5 += i;
	}
	return (s5);
}
/**
* main - this function show the sum of the multiples of 3 and 5
*
*
* Return: Returns 0
*/
int main(void)
{
	int s3 = multiples_of_3(s3);
	int s5 = multiples_of_5(s5);

	printf("%d, \n", s3);
	printf("%d, \n", s5);

	return (0);
}
