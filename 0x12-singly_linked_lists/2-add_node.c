#include "lists.h"
/**
 * add_node - this function add a node at the head of the linked list
 * @head: this parameter is the pointer to the head of the linked list
 * @str: this parameter is the text to add to the linked list
 *
 * Return: returns the address of the element added
 */


list_t *add_node(list_t **head, const char *str)
{
		list_t *copy;
		size_t cont = 0;

	if (head != NULL && str != NULL)
	{
		copy = malloc(sizeof(list_t));

		copy->str = strdup(str);
		while (str[cont])
			cont++;

		copy->len = cont;
		copy->next = *head;
		*head = copy;
		return (*head);
	}
		return (NULL);

}
