#include "function_pointers.h"
/**
 * array_iterator - This function pointer sends an array
 * @array: the array to send
 * @size: the size of the array sended
 * @action: The function to send the array to
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL || size != 0 || action != NULL)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}



}
