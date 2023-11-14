#include "main.h"
/**
 * print_rot13 -it will  conveert to rot13.
 * @args:it is a printf argument.
 * Return: 1 if successful
 */
int print_rot13(vari_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; al[j] && !k; j++)
		{
			if (s[i] == al[j])
			{
				_putchar(bl[j]);
				counterr++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counterr++;
		}
	}
	return (1);
}

