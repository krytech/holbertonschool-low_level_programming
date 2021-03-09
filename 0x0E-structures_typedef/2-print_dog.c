#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the dog name, age and owner stores in the dog struct
 * @d: pointer to the dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n",
							     d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n") : printf("Owner: %s\n",
							       d->owner);

}
