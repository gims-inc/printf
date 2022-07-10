#include "main.h"

/**
 *print_hexadecimal_upp - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 */

int print_hexadecimal_upp(va_list list)

{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);
	p_buff = string_to_upper(p_buff);
	size = print((p_buff != NULL) ? p_buff : "NULL");
	return (size);
}
