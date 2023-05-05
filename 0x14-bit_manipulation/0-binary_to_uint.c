#include <stdio.h>
#include "main.h"
/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: the pointer to binary number
  *Return: the converted number, or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, weight = 1;
	int r;
	int i;
	int q;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}
	if (b == NULL)
	{
		return (0);
	}
	else
	{
		q = atoi(b);
		while (q != 0)
		{
			r = q % 10;
			decimal = decimal + r * weight;
			q = q / 10;
			weight *= 2;
		}
	return (decimal);
	}
}
