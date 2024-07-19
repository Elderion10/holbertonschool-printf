#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_char - prints a char
 * @argumentos: is the list of the other args
 * Return: 1
 */
int print_char(va_list argumentos)
{
	_putchar(va_arg(argumentos, int));
	return (1);
}

/**
 * print_str - prints a string
 *@argumentos: is the list of the other args
 *Return: a
 */
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

/**
 * print_modulo - prints the char of percent
 *@argumentos: is the list of the other args
 *Return: write
 */
int print_modulo(va_list argumentos)
{
	(void)argumentos;
	return (write(1, "%", 1));
}
