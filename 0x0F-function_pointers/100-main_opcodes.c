#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of command line arguments entered
 * @argv: an array of the arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);


}
