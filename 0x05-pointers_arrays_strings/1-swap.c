#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: the variable pointing to the integer
 *
 * @b: the variable pointing to the integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
