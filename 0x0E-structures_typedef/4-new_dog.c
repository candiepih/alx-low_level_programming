#include <stdlib.h>
#include "dog.h"

/**
 * _str_length - determines the length of the string
 * @s: the string to get its length
 * Return: string length
 */

int _str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies string pointed to @src
 * @dest: destination to copy string
 * @src: the string to copy to destination
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: the name of the owner
 * Return: pointer to the new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name;
	char *dog_owner;

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	dog_name = malloc((_str_length(name) + 1));
	dog_owner = malloc((_str_length(owner) + 1));

	if (!dog_name || !dog_owner)
	{
		free(new_dog);
		if (!dog_owner && dog_name)
			free(dog_name);
		else
			free(dog_owner);
		return (NULL);
	}

	_strcpy(dog_name, name);
	_strcpy(dog_owner, owner);

	new_dog->name = dog_name;
	new_dog->owner = dog_owner;
	new_dog->age = age;

	return (new_dog);
}
