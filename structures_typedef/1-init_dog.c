#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initialize a variable of type struct dog
 *
 * @d:        Pointer to elements of my structure.
 * @name:     Name of some dog.
 * @age:      Age ofthe dog.
 * @owner:    Dog owner name.
 * Return:    void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
