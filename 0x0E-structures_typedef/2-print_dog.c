#include "dog.h"
/**
 * print_dog - prints dogs information
 * @d : insatnce of dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
		printf("Age: %0.6f\n", (d->age ? d->age : 0));
		printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
	}
}
