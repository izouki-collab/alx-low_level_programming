#include "main.h"

/**
 * _isupper - checks for uppercase character
 *  @c: input that is going to be checked
 * Return: 1 if @c is uppercase, otherwise 0
**/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
