#include "lists.h"
/**
 * add_nodeint_end - this function adds a node at the tail of a linkedlist
 * @head: this points to the head of the linkedlist
 * @n: this is the int to put in the node
 *
 *
 * Return: returns the adress of a node or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *last = *head;


	h = malloc(sizeof(listint_t));

	h->n = n;

	h->next = NULL;
	if (h == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = h;
		return (h);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = h;

	return (h);
}
