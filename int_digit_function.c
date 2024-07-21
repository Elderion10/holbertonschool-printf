#include "main.h"

/**
 * print_int_digit - prints integer deccimal
 * @argumentos - will pass the decimal
 *Return: largo
 */
int print_int_digit(va_list argumentos)
{
	int valor;
	unsigned int num, a, largo, contador;
	contador = 1;

	largo = 0;
	valor = va_arg(argumentos, int);

	if (valor < 0)
	{
		largo = largo + _putchar('-');
		num = valor * -1;
	}
	else
		num = valor;

	a = num;
	while (a > 9)
	{
		a = a / 10;
		contador = contador * 10;
	}
	while (contador >= 1)
	{
		largo = largo + _putchar(((num / contador) % 10) + '0');
		contador = contador / 10;
	}
	return (largo);
}
