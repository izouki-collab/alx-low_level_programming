#include <unistd.h>

/**
 * _putchar - write the charachter c to stdout . 
 * @c: the charachter to print . 
 *
 * return: on success 1 .
 * on error, 1 - is returned , and errno is set appropraitely.
 */

int _putchat(char c)
{
	return(write(1, &c, 1));
}
