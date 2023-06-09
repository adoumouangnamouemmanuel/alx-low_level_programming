#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		int mul;
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		mul = num1 * num2;
		printf("%d\n", mul);

		return (0);
	}
}
