#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 *
 * @d: The structure to initialize
 * @name: name of dog in the struct
 * @age: Age of dog in the struct
 * @owner: Owner of the dog in the struct
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
