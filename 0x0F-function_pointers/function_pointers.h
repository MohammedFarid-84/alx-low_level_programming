#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


/* necessary libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* my functions prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
