#include <stdio.h>

/**
 * main - Entry
 * Description: a program that prints its name, followed by a new line.
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0 always in success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
