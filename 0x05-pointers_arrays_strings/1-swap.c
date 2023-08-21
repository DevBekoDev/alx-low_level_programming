#include "main.h"

/*
 * swap_int - Entry
 * Description:	a function that swaps the values of two integers.
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
