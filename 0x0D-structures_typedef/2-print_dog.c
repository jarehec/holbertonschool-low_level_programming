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
	if (d->name == NULL)
		d->name = "(nil)\n";
	if (d->owner == NULL)
		d->owner = "(nil)\n";

	printf("Name: %s\n", d->name);
	d->age == 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
