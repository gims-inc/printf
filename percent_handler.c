#include "main.h"

/**
 * percent_handler - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @i: Iterator
 * Return: Size of the numbers of elements printed
 */

int percent_handler(const char *str, va_list list, int *i)

{
	int size, j, number_formats;
	format formats[] = {
	{'s', print_string}, {'c', print_char}
	};
	*i = *i + 1;
	if (str[*i] == '\0')
	return (-1);
	if (str[*i] == '%')
	{
	_putchar('%');
	return (1);
	}
	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
	if (str[*i] == formats[j].type)
	{
	size = formats[j].f(list);
	return (size);
	}
	}
	_putchar('%'), _putchar(str[*i]);
	return (2);
}
