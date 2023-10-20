#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * print_hexadecimal_upp - Print string in hexadecimal format
 * @list: list the number to be  printed
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

/**
 * is_lowercase - verrify if the string is in lowercase
 * @c: Character
 * Return: 1 or 0
 */
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - print string in uppercase
 * @s: character
 * Return: String in  uppercase
 */
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
