#include <stdio.h>

/**
 * main -prints out the name of the program
 * @argc:argument count
 * @argv:argument vector
 * Return:0 on success , 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n" , argv[0]);
		return (0);
	}
	else
	{
		printf("%s:there is no argument passed\n", argv[0]);
		return (1);
	}
}
