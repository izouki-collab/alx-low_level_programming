#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int *_strncpy(char *dest, char *src, int n)
{
	return stncpy(dest, src, n);
}
