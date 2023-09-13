#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function with 1 argument
 * @d: structure pointer
 *
 * Description: prints a struct
 * Return: na
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
