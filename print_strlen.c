#include "main.h"

/**
 * _strlen -it will  find the length of a strig
 * @s:it is a string
 * Return:it is an integer.
 */

int _strlen(char  *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc -it will find length of a strig but for constant characters.
 * @s:it is a string.
 * Return:it is an integer.
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

