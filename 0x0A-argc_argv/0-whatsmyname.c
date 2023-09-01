#include <stdio.h>

/**
 * main - prints program name, followed by new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
