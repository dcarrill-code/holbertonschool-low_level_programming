#include "lists.h"
/**
 * print_listint - this function prints a linked list of ints
 * @h: this pointers points to the number to print
 *
 *
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;


		if (h->n != 0)
		{
			printf("%d\n", h->n);
		}

		h = h ->next;
	}

	return (cont);


}

