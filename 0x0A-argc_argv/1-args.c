#include <stdio.h>

/**
 * main - Entry
 * Description: prints the number of arguments passed into it.
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0 always in success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
