#include "main.h"

/**
 * print_oct -it will  print an octal nuber
 * @vall:it is an arguments
 * Return:it will return counter if successful.
 */
int print_oct((var_list vall)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int numb = va_arg(val, unsigned int);
	unsigned int temr = numb;

	while (numb / 8 != 0)
	{
		numb /= 8;
		counterr++;
	}
	counterr++;
	arr = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = temr % 8;
		temr /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}

