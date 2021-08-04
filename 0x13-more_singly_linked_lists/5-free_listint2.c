#include "lists.h"
/**
 * free_listint2 - this function frees a linkedlist
 * @head: the pointer to the head of the linkedlist
 *
 */



void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}


}
