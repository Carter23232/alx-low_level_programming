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
	dog_t *nD;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		nD = malloc(sizeof(dog_t));
		if (nD == NULL)
			return (NULL);
		nD->name = malloc(sizeof(char) * (strlen(name) + 1));
		if (nD->name == NULL)
		{
			free(nD);
			return (NULL);
		}
		nD->owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (nD->owner == NULL)
		{
			free(nD->name);
			free(nD);
			return (NULL);
		}
		strcpy(nD->name, name);
		nD->age = age;
		strcpy(nD->owner, owner);
	}
	return (nD);
}
