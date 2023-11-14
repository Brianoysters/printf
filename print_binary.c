#include "main.h"

/**
 * print_bin -it will print binary nuber.
 * @vall:it is a parameter.
 * Return:it is an  integer
 */
int print_binary(va_list vall)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int numb = va_arg(vall, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & numb);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
