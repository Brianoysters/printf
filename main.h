#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int print_char(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
        int flags, int width, int precision, int size);

int _printf(const char *format, ...);
int _putchar(char c);
void print_buffer(char buffer[], int *buff_ind);

#endif
