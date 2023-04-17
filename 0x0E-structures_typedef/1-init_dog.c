#include <stdio.h>
#include "dog_h"

/**
 * init_dog - initializes a variable of type struct dog
 * @dd: poniter to string dog to initialize
 * @age: age to initialize
 * @name: name to inintialize
 * @owner: owner to inintialize
 */

void init_dog(struct dog *dd, char *name, float age, char *owner)
{
	if (dd == NULL)
		dd = malloc(sizeof(struct dog));
	dd->name = name;
	dd->age = age;
	dd->owner = owner;
}
