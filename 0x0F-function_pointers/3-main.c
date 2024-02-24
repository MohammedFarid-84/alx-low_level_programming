#include "3-calc.h"

/**
 * main - run a calculat program.
 * @argc: count of arguments.
 * @argv: an array of arguments.
 * Return: resulte of program or 0 if error.
 */
int main(int argc, char **argv)
{

	int (*calc_func)(int, int);
	int x = 0, y = 0, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit (100);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	calc_func = get_op_func(argv[2]);
	result = calc_func(x, y);

	printf("%d\n", result);
	return (0);
}
