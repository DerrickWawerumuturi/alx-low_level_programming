#include <stdio.h>
#include <stdlib.h>

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

long multiply(long num1, long num2)
{
	return num1 * num2;
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	long num1 = strtol(argv[1], NULL, 10);
	long num2 = strtol(argv[2], NULL, 10);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return 98;
	}

	long result = multiply(num1, num2);
	printf("%ld\n", result);
	return 0;
}

