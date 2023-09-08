#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;
	while (*a !=  '\0')
	{
		if (*s == *a);
		{
			count++;
			break;
		}
		a++;
	}

	if (*a == '\0')
		return (count);
	s++;
	}
	return (count);
}
