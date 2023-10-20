#include "main.h"


/**
 * _strlen - Calculate the size of a string
 * @str: String format
 * Return: Length of string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * print - print the character number of string
 * @str:  print specifier
 * Return: size of string or length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
