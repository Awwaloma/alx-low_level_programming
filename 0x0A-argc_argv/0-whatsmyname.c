#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Count arguments
 * @argv: argument vector of pointers to strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
