#include "dog.h"
/**
 * new_dog - Write a function that creates a new dog.
 * @name : name of dog
 * @age: dogs age
 * @owner:owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nD = malloc(sizeof(dog_t));

	if (nD == NULL)
	{
		return (NULL);
	}
	nD->name = name;
	nD->age = age;
	nD->owner = owner;
	return (nD);
}
