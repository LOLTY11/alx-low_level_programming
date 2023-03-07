#include "main.h"

/**
 * _strchr - locates characters in string
 * @s: source string
 * @c: character to find
 * Return: the string frim character found
 */

void *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
