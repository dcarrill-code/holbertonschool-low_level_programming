#include "holberton.h"
#include "stdio.h"
/**
* times_table - this function show the time tables
*
* Return: Returns the time tables in order
*/

void times_table(void)
{
	int i, n, m;

	for (i = 0 ; i < 10 ; i++)
	{
		m = 0;
		for (n = 0 ; n < 10 ; n++)
		{
			if (m > 9)
			{
				printf(", %d", m);
			}
			else
			{
				printf(",  %d", m);
			}
			m = i + m;
		}
		printf("\n");
	}


}
