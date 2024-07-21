#include "main.h"
#include <unistd.h>
/**
 * get_func - chose the right function to perform
 * the correct specifier
 *@s: function pointer that contains
 *the va_list
 *Return: NULL
 */
int (*get_func(const char *s))(va_list)
{
	specs sp[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_modulo},
		{"d", print_int_digit},
		{"i", print_int_digit},
		{NULL, NULL}
	};

	int i;

	for (i = 0; sp[i].z; i++)
	{
		if (*s == *(sp[i].z))
		{
			return (sp[i].f);
		}
	}
	return (NULL);
}
