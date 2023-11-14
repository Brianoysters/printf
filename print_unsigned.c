#include "main.h"
/**
 * print_unsigned -it will print integer.
 * @args:it is an argument to print.
 * Return:it will return intenger
 */
int print_unsigned(vari_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int numb, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	numb = n;

	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		last = -last;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = n;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

