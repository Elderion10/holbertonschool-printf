#ifndef FF
#define FF
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *struct specifiers - the structure to use later
 *@z: pointer
 *@f: pointer with va_list has parameter
 */
typedef struct specifiers
{
char *z;
int (*f)(va_list);
} specs;

int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list argumentos);

int print_str(va_list argumentos);

int print_modulo(va_list argumentos);

int (*get_func(const char *format))(va_list);

#endif
