#include "dog.h"
#include <stdio.h>
/**
 * init_dog - This function set the data of the dog
 * @d: is the struct of the dog
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
