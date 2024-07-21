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

	i = 0;
	sum = 0;
	va_start(argumentos, format);

		if (format == NULL || !format[i + 1])
			return (-1);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1])
				{
					if (format[i + 1] != 'c' && format[i + 1] != 's'
							&& format[i + 1] != '%' && format[i + 1] != 'd'
							&& format[i + 1] != 'i')
					{
						sum += _putchar(format[i]);
					}
					else
					{
						f = get_func(&format[i + 1]);
						sum += f(argumentos);
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
