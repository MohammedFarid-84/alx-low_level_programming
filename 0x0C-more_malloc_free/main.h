#ifndef MAIN_H
#define MAIN_H

/* nesseciry libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>


/* my functions prototypes */
int _putchar(char);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);


#endif
