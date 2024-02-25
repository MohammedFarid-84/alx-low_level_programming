#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcode with a spacefic format.
 * @argc: arguments count.
 * @argv: arguments.
 * Return: zero always.
 */
int main(int argc, char **argv)
{
	int x = 0;
	FILE *f;
	size_t rdbytf = 0, i = 0, siz = 0;
	unsigned char bfr[1024];

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = fopen(argv[0], "rb");
	if (f == NULL)
		return (0);
	fseek(f, 0, SEEK_END);
	siz = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (siz  < x)
		exit(1);

	rdbytf = fread(bfr, sizeof(unsigned char), x, f);
	for (i = 0; i < rdbytf; i++)
	{
		printf("%02x ", bfr[i]);
	}
	printf("\n");
	fclose(f);
	return (0);
}
