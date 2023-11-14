#include "main.h"

/**
 * print_pointer - prints hexadecimal nuber.
 * @vall:it is an  arguments.
 * Return:it will returned counter if successful
 */
int print_pointer((var_list vall)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int h;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}

