#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
int _strlen(const char *s);
int _pow(int x, int y);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif/*_MAIN_H_*/
