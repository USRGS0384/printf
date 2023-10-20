#include "main.h"

/**
 * print_unsigned - disply unsigned character
 * @list: print list of number
 *
 * Return: the length of format else NULL
 */
int print_unsigned(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
