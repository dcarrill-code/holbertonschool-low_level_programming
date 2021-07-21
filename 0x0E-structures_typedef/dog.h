#ifndef _DOG_
#define _DOG_

/**
 * struct dog - The struct for the dog
 * @name: the name ofthe dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This struct has the data of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_ */
