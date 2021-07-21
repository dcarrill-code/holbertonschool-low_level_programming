#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
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
	int i = 0, j = 0, k, l;

	while (name[i])
		i++;
	while (owner[j])
		j++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * i + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (k = 0 ; k <= i ; k++)
		d->name[k] = name[k];

	d->owner = malloc(sizeof(char) * j + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (l = 0 ; l < j ; l++)
		d->owner[l] = owner[l];

	d->age = age;
	return (d);
}
