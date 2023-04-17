#include "dog.h"
/**
 * print_dog - prints dogs information
 * @d : insatnce of dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
