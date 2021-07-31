#include "lists.h"
/**
 * list_len - this function print the number of nodes of a linked list
 * @h: this points to the linked list head
 *
 *
 * Return: returns the count of nodes
 */

size_t list_len(const list_t *h)
{

	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
