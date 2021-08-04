#include "lists.h"
/**
 * sum_listint - this function sums the values of a linkedlist
 * @head: this parameter is the pointer to the head of the linkedlist
 *
 * Returns: returns the sum of all the elements of the linkedlist
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	return (sum);
	}
	return (0);
}
