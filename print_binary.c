#include "main.h"

/**
 * print_binary - Print base 2 number
 * @list: list numbers and print in base 2
 * Return: size of  binary numbers
 **/
int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
