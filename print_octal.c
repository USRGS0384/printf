#include "main.h"

/**
 * print_octal - Print an unsigned octal numbers
 * @list: print list of numbers
 *
 * Return: the size of the number
 */
int print_octal(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
