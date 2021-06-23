#include "holberton.h"
#include "stdio.h"
/**
* jack_bauer - This function show the time
*
* Return: print the time
*/

void jack_bauer(void)
{
	int i, h;

	for (i = 0 ; i < 24 ; i++)
	{
		for (h = 0 ; h < 60 ; h++)
		{
			if (i <= 9 && h <= 9)
			{
				printf("0%d:", i);
				printf("0%d \n", h);
			}
			else if (i <= 9)
			{
				printf("0%d:", i);
				printf("%d \n", h);
			}
			else if (h <= 9)
			{
				printf("%d:", i);
				printf("0%d \n", h);
			}
			else
			{
				printf("%d:", i);
				printf("%d \n", h);
			}
		}
	}

}
