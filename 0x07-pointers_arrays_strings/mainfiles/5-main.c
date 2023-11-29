#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "solve";
	char *f1 = "School";
	char *f2 = "";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));
	printf("%s\n","------------------------------");
	t = _strstr(s, f1);
	printf("%s\n", (t == NULL ? "nil" : t));
	printf("%s\n","------------------------------");
	t = _strstr(s, f2);
	printf("%s\n", (t == NULL ? "nil" : t));
	printf("%s\n","------------------------------");
	return (0);
}
