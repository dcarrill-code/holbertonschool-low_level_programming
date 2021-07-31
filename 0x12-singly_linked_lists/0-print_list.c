#include "lists.h"








size_t print_list(const list_t *h)
{
	int cont = 0;


	while (h != NULL)
	{
		cont++;

		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;

	}
	return (cont);
}
