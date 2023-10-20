#include "main.h"
/**
 * print_char - print number of characters.
 * @list: the list of va_list.
 * Return: 1 elso NULL
 */
int print_char(va_list list)
{
	int aux;

	aux = va_arg(list, int);

	_putchar(aux);

	return (1);
}
