#include "main.h"
/**
 * print_i -it will  print intenger.
 * @args:it is an arguument to print.
 * Return:it will return an  integer if successful.
 */
int print_i(vari_list args)
{
	int n = va_arg(args, int);
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

/**
 * print_d -it will print decimal.
 * @args:it is an argument to print.
 * Return:it will return  integer if successful.
 */

int print_d(vari_list args)
{
	int n = va_arg(args, int);
	int numb, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

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
