#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, owner_len, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	len_name = owner_len = 0;
	while (name[len_name++])
		;
	while (owner[owner_len++])
		;
	d1->name = malloc(len_name * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(owner_len * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
