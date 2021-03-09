#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog entry in the dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int n_len = 0; /* name length */
	int o_len = 0; /* owner length */
	int i;
	char *n_ph; /* name placeholder for copying */
	char *o_ph; /* owner placeholder for copying */

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	while (name[n_len])
		n_len++;
	while (owner[o_len])
		o_len++;
	n_len++;
	o_len++;

	n_ph = malloc(sizeof(char) * n_len);
	if (!n_ph)
	{
		free(newdog);
		return (NULL);
	}
	o_ph = malloc(sizeof(char) * o_len);
	if (!o_ph)
	{
		free(n_ph);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < n_len; i++)
		n_ph[i] = name[i];
	for (i = 0; i < o_len; i++)
		o_ph[i] = owner[i];

	newdog->name = n_ph;
	newdog->age = age;
	newdog->owner = o_ph;

	return (newdog);
}
