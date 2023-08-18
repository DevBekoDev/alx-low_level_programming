#include <stdio.h>
#include <time.h>
#include <stdib.h>

/*
 * positive_or_negative: entry
 * Description: check the code
 * description: test
 * Return: 0 always in success
 */

int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
