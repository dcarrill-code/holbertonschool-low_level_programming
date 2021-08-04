#include "lists.h"
/**
 * add_nodeint - this function add a node to the linkedlist
 * @head: this parameter points to the head of the linkedlist
 * @n: this is the int to put in the linked list
 *
 * Return: return the adress of the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));

	h->n = n;

	h->next = *head;

	*head = h;

	return (h);


}
