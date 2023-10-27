#include <stdio.h>
#include <stdlib.h>

/**
 * main - is the entry point of ptogram
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success , 1 on failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
	sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
