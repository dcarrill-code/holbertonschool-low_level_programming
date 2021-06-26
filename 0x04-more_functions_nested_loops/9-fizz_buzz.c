#include "holberton.h"





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
			printf("Buzz ");
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
