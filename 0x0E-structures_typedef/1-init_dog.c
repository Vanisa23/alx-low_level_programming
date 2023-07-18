#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function initializes struct dog.
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age t0 initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
