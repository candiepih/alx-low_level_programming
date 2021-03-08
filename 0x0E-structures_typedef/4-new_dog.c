#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: the name of the owner
 * Return: pointer to the new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}

	return (new_dog);
}
