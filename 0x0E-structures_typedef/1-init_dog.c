#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Define a new struct.
 * @d: pointer.
 * @name: char.
 * @age: float
 * @owner: char
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
