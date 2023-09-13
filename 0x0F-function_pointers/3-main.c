#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - run the app
 * @argc: number of command line arguments
 * @argv: the arguments passed
 * Return: the result of the called function
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] !='\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (1);
}
