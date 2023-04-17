#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int h = 0;

	while (*s++)
		h++;

	return (h);
}

/**
 * _strcopy - Copies the string pointed to by src.
 * including the terminating null byte (\0).
 * to the buffer pointed to by dest.
 * @dest: Pointer to the buffer in which we copy the string.
 * @src: String to be copied.
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the new dog (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
