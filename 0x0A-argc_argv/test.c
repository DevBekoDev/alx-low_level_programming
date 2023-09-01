#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry
 * Description: a program that adds positive numbers.
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0 always in success
 */

int main(int argc, char *argv[])
{
	int i, addition;

	addition = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				addition = addition + atoi(argv[i]);
			}
		}
	}

	printf("%d\n", addition);
	return (0);
}
