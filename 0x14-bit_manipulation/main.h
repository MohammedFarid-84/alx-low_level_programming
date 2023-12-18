#ifndef MAIN_H
#define MAIN_H

/* nessery standard libraries */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>


/* prototypes of my functions */
unsigned int binary_to_uint(const char *b);
void _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);


#endif
