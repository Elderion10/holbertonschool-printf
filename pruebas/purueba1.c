#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int i:

		if (!format)
		{
			return (-1);
		}

		for (i = 0; format[i] != '\0'; i++)
		{
			while (i != "%")
				_putchar(format[i];

			if (format[i] = "%"
