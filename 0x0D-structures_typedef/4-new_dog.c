#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;


	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	else
		_strcpy(ndog->name, name);

	ndog->age = age;
	ndog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	else
		_strcpy(ndog->owner, owner);

	return (ndog);
}
/**
* _strlen - returns the length of a string
* @s: string input
* Return: length of s
*/
int _strlen(char *s)
{
	unsigned int lngth = 0;

	for (lngth = 0; s[lngth] != '\0'; lngth++)
	;

	return (lngth);
}
/**
* _strcpy - copy a string
* @dest: string output
* @src: string input
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	return (dest);
}
