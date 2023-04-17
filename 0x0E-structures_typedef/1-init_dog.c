#include "dog.h"
#include <string.h>
/**
 * init_dog - initialize varaibles of struct dog
 * @d : insatnce of dog
 * @name: name to pass
 * @age : age to pass
 * @owner: owner var to pass
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (strlen(name) > 0 && strlen(owner) > 0 && age > 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
