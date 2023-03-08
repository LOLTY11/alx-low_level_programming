#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: the string to print
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	
	else
		_putchar('\n');
}
