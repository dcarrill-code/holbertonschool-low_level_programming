#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - This function creates a copy of the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int c1 = 0, c2 = 0, i;

	while (name[c1])
		c1++;
	while (owner[c2])
		c2++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * c1 + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0 ; i <= c1 ; i++)
		d->name[i] = name[i];

	d->owner = malloc(sizeof(char) * c2 + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0 ; i < c2 ; i++)
		d->owner[i] = owner[i];

	if (d == NULL)
		return (NULL);

	d->age = age;
	return (d);
}
