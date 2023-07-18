#include "main.h"
/**
 * free_dog - Entry point
 * free_dog: frees dogs
 * @d: input
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name = name)
			free(d->name);
		if (d->owner = owner)
			free(d->owner);
		free(d);
	}
}
