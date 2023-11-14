#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf -it is the printf function.
 * @format:this is the format.
 * Return:it will return printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, bufff_ind = 0;
	va_list list;
	char buffer[BUFFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[bufff_ind++] = format[i];
			if (bufff_ind == BUFFF_SIZE)
				print_buffer(buffer, &bufff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &bufff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &bufff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer -it will print the contents of the buffer if they exists.
 * @buffer:it is aan array of chars.
 * @bufff_ind:It is the index at which to add next char( length).
 */
void print_bufffer(char buffer[], int *bufff_ind)
{
	if (*bufff_ind > 0)
		write(1, &buffer[0], *bufff_ind);

	*bufff_ind = 0;
}

