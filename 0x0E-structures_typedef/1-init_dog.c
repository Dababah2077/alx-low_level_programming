#include "dog.h"

/**
 * init_dog - Entry point
 * init_dog: poppy
 * @age: input
 * @name: input
 * @owner: input
 * @d: dog to init
 * Return: dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
