#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s : a variable that points the value
 * Return : Nothing
 */
void _puts_recursion(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		_putchar(*s[n]);
		n++;
	}
	_putchar('\n');
}
