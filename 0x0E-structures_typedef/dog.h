#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * struct dog: poppy
 * @age: input
 * @name: input
 * @owner: input
 * Return: Always 0 (Success)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
