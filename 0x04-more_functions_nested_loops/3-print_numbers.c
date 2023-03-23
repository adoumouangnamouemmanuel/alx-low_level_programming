#include "main.h"
/**
 * void print_numbers - Prints number from 0 to 9
 *
 */
void print_numbers(void)
{
	int i;
	for (i = 0; i < 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
