#include "lists.h"



size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;


		if (h->n != 0)
		{
			printf("%d\n", h->n);
		}

	}

	return (cont);


}

