#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: argument count
 * @argv: argument vector
 * Return:1 on success , 0 on failure
 */
int main(int argc, char *argv[])
{
	int A,B,total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	A = atoi(argv[1]);
	B = atoi(argv[2]);

	total = A * B;

	printf("%d\n", total);
	return (0);
}
