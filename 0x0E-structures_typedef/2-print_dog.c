#include "dog.h"
#include <stdio.h>
/**
 * print_dog - This funtion print the date of the struct dog
 * @d: the pointer to struct dog
 *
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nill)");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("Age: (nill)");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nill)");
		else
			printf("Owner: %s\n", d->owner);

	}



}
