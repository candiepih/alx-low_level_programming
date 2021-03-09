#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog struct
 * @d: the dog struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (IS_NULL(d->name)));

		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", (d->age));

		printf("Owner: %s\n", (IS_NULL(d->owner)));
	}
}
