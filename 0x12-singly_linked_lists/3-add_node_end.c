#include "lists.h"
/**
 * add_node_end - this function add a node to the tail of the linked list
 * @head: this is the parameter pointing to the head of the linked list
 * @str: this is the text to set in the node
 *
 * Return: returns a copy of the node;
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy;
	list_t *last = *head;
	size_t cont = 0;

	copy = malloc(sizeof(list_t));

	copy->str = strdup(str);
	while (str[cont])
		cont++;

	copy->len = cont;
	copy->next = NULL;
	if (*head == NULL)
	{
		*head = copy;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = copy;

	return (copy);
}
