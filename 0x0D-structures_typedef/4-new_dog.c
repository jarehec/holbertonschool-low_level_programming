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
	unsigned int n_len = _strlen(name), o_len = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (n_len + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	else
		_strcpy(ndog->name, name);

	ndog->age = age;

	ndog->owner = malloc(sizeof(char) * (o_len + 1));
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
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
