#include "lists.h"
/**
 * get_nodeint_at_index - this function returns the nth node of a linkedlist
 * @head: is the pointer to the head of the linked list
 * @index: is the parameter that has the node to look for
 *
 * Return: returns the nth node
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *tmp = head;
	unsigned int count = 0;

	if (head != NULL)
	{
		while (tmp != NULL)
		{
			if (count == index)
				return (tmp);

			count++;
			tmp = tmp->next;
		}
	}
		return (NULL);

}
