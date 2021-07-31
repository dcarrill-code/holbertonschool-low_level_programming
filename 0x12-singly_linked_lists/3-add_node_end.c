#include "lists.h"







list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy;
	list_t *last = *head;
	size_t cont;

	copy = malloc(sizeof(list_t));

	copy->str = strdup(str);
	while (str[cont])
		cont++;

	copy->len = cont;
	copy->next = NULL;
	if (*head == NULL )
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
