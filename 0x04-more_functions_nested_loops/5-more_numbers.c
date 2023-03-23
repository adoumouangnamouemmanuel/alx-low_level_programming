#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + (n % 10));
			n++;
		}
		i++;
		_putchar('\n');
	}
}
