#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - prints elements from struct dog
* @d: dog struct
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age != 0 ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
	d->owner != NULL ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
