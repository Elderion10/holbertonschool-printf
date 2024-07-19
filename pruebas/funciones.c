#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_character - prints a char
 * @c: variable 
 */
int print_char(va_list argumentos)
{
	_putchar(va_arg(argumentos, int));
	return (1);
}

int print_str(va_list argumentos)
{
	int a;
	char *str;

	str = va_arg(argumentos, char *);

	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
	}
	return (a);
}

int print_modulo(va_list argumentos)
{
	(void)argumentos;
	return (write(1, "%", 1));
}
