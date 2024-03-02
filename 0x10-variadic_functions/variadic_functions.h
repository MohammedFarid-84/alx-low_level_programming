#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* NECESSARY LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>



/* MY FUNCTIONS PROTOTYPES */
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);




/**
 * formats - structure is formate.
 * @chr: is an elais charecter.
 * @func: a pointer to func.
 * Description: formats convert an alis charecter
 * to correct charecter in printf format.
 */
typedef struct formats
{
	char chr;
	void (*func)();
} f_t;

#endif
