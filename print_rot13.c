#include "main.h"

/**
 * rot13 - Encodes a string by  rot13.
 * @s: String to enconde
 * Return: String encode
 */
int rot13(char *s)
{
	int i, j;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!normal[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * print_rot - display rot13'ed string
 * @list: String
 * Return: size of the string encoded
 */
int print_rot(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char *);
	p_len = rot13((p != NULL) ? p : "(ahyy)");

	return (p_len);
}
