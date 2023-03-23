#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Auth: Abdelkouddouss Mekkaoui
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x10-variadic_functions directory.
 */

#include <stdarg.h>

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int _putchar(char *c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
