#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: Output character
 * Return: 1 if success and -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
