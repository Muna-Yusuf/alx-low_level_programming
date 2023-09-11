#include "dog.h"
#include <stdlib.h>

/**
 * copy -  a function that copy.
 * @d: srtring.
 * @s: string.
 * Return: d
 */
char *copy(char *d, char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		d[i] = s[i];
	}
	d[i] = '\0';
	return (d);
}

/**
 * len - the length of string.
 * @str: string.
 * Return: length.
 */

int len(char *str)
{
	int l = 0;

	while (*str++)
	{
		l++;
	}
	return (l);
}

/**
 * new_dog - a function that creates a new dog.
 * @name:char.
 * @age:float.
 * @owner:char
 * Return:  if the function fails(null).
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (0);
	}
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == 0)
	{
		return (0);
	}

	dog->name = malloc(sizeof(char) * (len(name) + 1));
	if ((*dog).name == 0)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(sizeof(char) * (len(owner) + 1));
	if ((*dog).owner == 0)
	{
		free(dog->name);
		free(dog);
		return (0);
	}
	dog->name = copy(dog->name, name);
	dog->age = age;
	dog->owner = copy(dog->owner, owner);

	return (dog);
}
