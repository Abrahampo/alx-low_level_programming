#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: poniter to string dog to initialize
 * @age: age to initialize
 * @name: name to inintialize
 * @owner: owner to inintialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}
