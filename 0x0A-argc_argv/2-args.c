#include <stdio.h>

/**
 * main - Entry
 * Description: a program that prints all arguments it receives.
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0 always in success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
