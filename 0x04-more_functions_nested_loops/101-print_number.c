#include "main.h"

/**
 * print_triangles - Prints a triangle using # character.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
	for (hash = 1; has <= size; hash++)
	{
	for (index = size - hash; index > 0; index--)
	{
	_putchar(' ');
	}
	for (index = 0; index < hash; index++)
	{
	_putchar('0');
	}
	if (hash == size)
	{
	continue;
	}
	_putchar('\n');
}