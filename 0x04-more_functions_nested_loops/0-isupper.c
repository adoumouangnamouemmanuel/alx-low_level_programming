#include <main.h>
/**
 * int _isupper(int c) - a function that checks for uppercase character.
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
