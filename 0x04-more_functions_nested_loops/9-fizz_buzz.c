#include <stdio.h>

/**
 * main - check the code
 * Description: Fizz-Buzz test
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int isFizz = i % 3 ==0;
		int isBuzz = i % 5 ==0;

		if (isFizz)
		{
			printf("Fizz ");
		}
		else if (isBuzz)
		{
			printf("Buzz ");
		}
		else if (isFizz && isBuzz)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
