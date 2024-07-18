#include "main.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);
/**
 * _printf - blabla
 * @format: pointer
 * Return: the number of characters
 */
int _printf(const char *format, ...)
{
	const char *a;
	va_list lista;
	int sum;
	char *s;
	unsigned int i;

	sum = 0;

	if (!format)
	{
		return (-1);
	}

	va_start(lista, format);
	for (a = format; *a != '\0'; a++)
	{
		if(s = va_arg(lista, char *)
				puts(s);

		if ("%c")
			_putchar(i);

		if ("%")
			_putchar('%');

		sum += va_arg(lista, int);
	}

	va_end(lista);
	return (sum);
}
