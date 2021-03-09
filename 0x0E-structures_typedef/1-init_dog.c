#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initalizes variables for struct dog
 * @d: pointer to struct dog
 * @name: dog name value
 * @age: dog age value
 * @owner: dog owner value
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
