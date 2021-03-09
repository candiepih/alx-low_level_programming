#include "dog.h"

/**
 * init_dog - initalizes dog struct
 * @d: struct provided
 * @name: string to fill structures name
 * @age: float age to fill structures age
 * @owner: string for owner in the struct
 * Return: nothing
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
