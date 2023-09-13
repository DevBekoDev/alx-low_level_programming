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
	if (argc < 4)
	{
		printf("Enter two numbers and the operation u want\n");
		return (1);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (1);
}
