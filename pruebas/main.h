#ifndef FF
#define FF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 */

typedef struct specifiers
{
  char *z;
  int (*f)(va_list);
}specs;

int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list argumentos);

int print_str(va_list argumentos);

int print_modulo(va_list argumentos);

#endif
