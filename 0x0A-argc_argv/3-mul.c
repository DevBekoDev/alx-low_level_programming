#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry
 * Description: a program that multiplies two numbers.
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0 always in success
 */

int main(int argc, char *argv[])
{
	int mul;

	mul = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	return (0);
}
