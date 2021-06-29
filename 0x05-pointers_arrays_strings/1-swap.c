#include "holberton.h"
/**
 * swap_int - this function swap the valors of two variables
 * @a: first variable to swap
 * @b: second variable to swap
 *
 */


void swap_int(int *a, int *b)
{
	int con;

	con = *a;

	*a = *b;
	*b = con;

}
