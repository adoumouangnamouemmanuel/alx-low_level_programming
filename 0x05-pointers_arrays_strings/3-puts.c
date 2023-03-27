#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str : The variable that store the stirng
 *
 * Return : Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		_putchar('\n');
		str++;
	}
}
