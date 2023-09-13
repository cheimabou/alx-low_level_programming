#include "dog.h"
/**
 * init_dog - a function that initializes a struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}