#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints all single digit characters of base 10
 *
 *Return: always zero
 *
 */
int main(void)
{
	int i, dig;

	for (i = 0, dig = 48; i < 10; i++, dig++)
	{
		putchar(dig);
	}
	putchar(10);
	return (0);
}
