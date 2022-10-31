#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * *new_dog - Function that creates a new dog.
 *
 * @name:     New dog name.
 * @age:      Age of the dog.
 * @owner:    Dog owner name.
 *
 * Return: NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdata;
	int namelen, ownerlen;
	
	namelen = _strlen(name) + 1;
	ownerlen = _strlen(owner) + 1;
	newdata = malloc(sizeof(dog_t));

	if (newdata == NULL)
		return (NULL);

	newdata->name = malloc(sizeof(char) * namelen);

	if (newdata->name == NULL)
	{
		free(newdata);
		return (NULL);
	}

	newdata->age = age;

	newdata->owner = malloc(sizeof(char) * ownerlen);

	if (newdata->owner == NULL)
	{
		free(newdata->name);
		free(newdata);
		return (NULL);
	}
	_strcpy(newdata->name, name);
	_strcpy(newdata->owner, owner);
	return (newdata);
}

/**
 * _strlen - Function that returns the length of a string.
 * @s:       Pointer type char.
 * Return:   The length of the string.
 */
int _strlen(char *s)
{
	int go = 0;

	while (*s != '\0')
	{
		s++;
		go++;
	}
	return (go);
}

/**
 * *_strcpy - Function that copies a string included the null bite
 *            to a buffer.
 * @dest:     Pointer to a buffer.
 * @src:      Pointer to string.
 * Return:    Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index, len;

	index = 0;
	len = _strlen(src);
	while (index < len)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
