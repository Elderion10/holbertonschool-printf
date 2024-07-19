#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - prints depending of the format
 *@format: the const variable to initialize
 *Return: sum
 */
int _printf(const char *format, ...)
{
	int i;
	int sum;
	int (*f)(va_list);
	va_list argumentos;

	sum = 0;
	va_start(argumentos, format);

		if (format == NULL)
		{
			return (-1);
		}
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1])
				{
					if (format[i + 1] != 'c' && format[i + 1] != 's'
							&& format[i + 1] != '%')
					{
						sum += _putchar(format[i]);
						sum += _putchar(format[i + 1]);
					}
					else
					{
						f = get_func(&format[i + 1]);
						f(argumentos);
						i++;
					}
				}
			}
			else
			{
				_putchar(format[i]);
				sum++;
			}
		}
		va_end(argumentos);
		return (sum);
}
