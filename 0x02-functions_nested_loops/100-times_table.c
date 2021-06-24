#include "holberton.h"
#include "stdio.h"





void print_times_table(int n)
{

	int i, j, m;

		if (n > 0 && n < 15)
		{
			for (i = 0 ; i <= n ; i++)
			{
				m = 0;
				for (j = 0 ; j <= n ; j++)
				{
					if (j == 0)
					{
						printf("%d", j);
					}
					else if (m > 9 && m <= 99)
					{
						printf(",  %d", m);
					}
					else if (m > 99)
					{
						printf(", %d", m);
					}
					else
					{
						printf(",   %d", m);
					}
					m = m + i;
				}
				printf("\n");
			}
		}

}
