#include "dog.h"
#include <stdlib.h>
/**
* init_dog - intializes a variable of type dog
* @d: struct
* @name: val of name
* @age: val of age
* @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
