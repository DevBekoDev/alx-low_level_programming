#include <stdio.h>

/**
 * main - check the code
 * Description: Fizz-Buzz test
 * Return: ) always in success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int isFizz = i % 3 == 0;
		int isBuzz = i % 5 == 0;
		/*int isFizzBuzz = i % 5 == 0 && i % 3 == 0;*/

		if (isFizz && isBuzz)
		{
			printf("FizzBuzz ");
		}
		else if (isBuzz)
		{
			printf("Buzz ");
		}
		else if (isFizz)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
