#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int count = 0
	
	if (argc > 0)
	{
	
	while (count < argc)
	{
	printf("%s\n", argc[count]);
	count++
	}
	}
	return (0);
}
