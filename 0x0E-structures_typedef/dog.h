#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - abut a dog
 * @name: defines name of the dog
 * @owner: defines owner of the dog
 * @age: defines the age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#define IS_NULL(x) ((x == NULL) ? ("(nil)") : (x))

void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
