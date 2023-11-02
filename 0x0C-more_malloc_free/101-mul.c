#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string is composed of digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiply two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
long multiply(long num1, long num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	printf("%ld\n", result);
	return (0);
}

