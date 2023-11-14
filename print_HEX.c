#include "main.h"

/**
 * print_HEX -it prints an hexadecimal nuber.
 * @vall:it is an arguments.
 * Return:it is a  counter
 */
int print_HEX((var_list vall)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int numb = va_arg(vall, unsigned int);
	unsigned int temr = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counterr++;
	}
	counterr++;
	arr = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = temr % 16;
		temr /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}
