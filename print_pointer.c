#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_pointer - Print pointer to the hexadecimal format
 * @list: list out the number to print
 * Return: print size of the number
 */
int print_pointer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p_buff, "0"))
		return (print("(nil)"));

	size = print("0x");

	if (!_strcmp(p_buff, "-1"))
		size += print("ffffffffffffffff");
	else
		size += print(p_buff);

	return (size);
}

/**
 * _strcmp - Compare the strings 1 and 2
 * @s1: String 1
 * @s2: String 2
 * Return: specifier
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
