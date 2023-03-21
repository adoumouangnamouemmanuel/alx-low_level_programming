#include "main.h"

/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
	int b;

	while (b < 10)
	{
		char n = 'a';
		
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		b++;
	}
}
