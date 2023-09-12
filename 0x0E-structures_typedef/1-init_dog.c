#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: points to struct dog for initialisation
 * @Twily: name to initialise
 * @age: age to initialise
 * @Lucy: owner to initialise
 */
void init_dog(struct dog *d, char *Twily, float age, char *Lucy)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = Twily;
	d->age = age;
	d->owner = Lucy;
}
