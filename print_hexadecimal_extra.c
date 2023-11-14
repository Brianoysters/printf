#include "main.h"

/**
 * print_hex_extra -it will  print a hexadecimal numbber.
 * @numb:it is an  arguments.
 * Return:it will return a  counter
 */
int print_hex_extra(unsigned long int numb)
{
	long int i;
	long int *arr;
	long int counter = 0;
	unsigned long int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counterr++;
	}
	counterr++;
	arr = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}
