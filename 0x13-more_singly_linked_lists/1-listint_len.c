#include "lists.h"
/**
 * listint_len - this function print the number of nodes of a linked list
 * @h: this parameter points to the head of the linked list
 *
 *
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h);
	{
		cont++;

		h = h->next;
	}

return (cont);

}
