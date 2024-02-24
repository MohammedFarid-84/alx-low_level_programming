#include "3-calc.h"

/**
 * get_op_func - select a correct function
 * depending a user oprator inputs.
 * @s: an operator, "+, -, *, /, %".
 * Return: a function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		/* printf("s= %s, ops[i].op= %s\n", s, ops[i].op); */
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
