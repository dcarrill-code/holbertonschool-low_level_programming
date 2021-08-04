#include "lists.h"
/**
 * pop_listint - this function delete the first node of a linkedlist
 * @head: this is the pointer to the head of the linkedlist
 *
 * Return: returns the value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	val = tmp->n;
	*head = (*head)->next;

	free(tmp);

	return (val);
}
