#include "main.h"

/**
 * print_HEX_extra -it will print a hexadecimal numbber.
 * @numb:it is a numbber to print
 * Return: it will return a counter
 */
int print_HEX_extra(unsigned int numb)
{
	int i;
	int *arr;
	int counter = 0;
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
