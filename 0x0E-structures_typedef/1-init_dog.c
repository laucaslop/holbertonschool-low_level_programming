#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog - main
* @d: pointer to struct
* @name: pointer to char
* @age: float
* @owner: owner
* Return:char pointer
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
