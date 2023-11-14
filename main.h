#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format -it will be converter for printf.
 * @phi: it is a type char pointer of the specifier.
 * @function:it is a function for the conversion specifier.
 */

typedef struct format
{
	char *phi;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer((var_list vall);
int print_unsigned(vari_list args);
int print_hex_extra(unsigned long int numb);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int numb);
int print_exc_string((var_list vall);
int print_HEX((var_list vall);
int print_hex((var_list vall);
int print_oct((var_list vall);
int print_binary(va_list vall);
int print_revs(vari_list args);
int print_rot13(vari_list args);
int print_i(vari_list args);
int print_d(vari_list args);
int _strlen(char  *s);
int rev_string(char  *s);
int print_37(void);
int print_c((var_list vall);
int print_s((va_list vall);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
