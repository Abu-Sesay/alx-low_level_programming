#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable
 * @d: pointer to structure
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
