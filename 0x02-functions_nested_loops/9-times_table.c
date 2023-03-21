#include "main.h"
/**
 *times_table - prints multiplication table
 *
 *Description: timestable
 *
 *Return: void
 *
 */
void times_table(void)
{
	int i;
	int result;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0' + result);
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
