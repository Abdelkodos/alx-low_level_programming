#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to the std out
 * @c: parameter to compare
 * Return: 0 or 1
 */

int _putchar(char c);

/**
 * print_alphabet - print alphabet from a until z followed by a new line using _putchar function
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print alphabet ten times in lowercase
 */

void print_alphabet_x10(void);

/**
 * _islower(c) - pritn if character a lowercase alphabet
 * @c: character to use
 * Return 0 or 1
 */

int _islower(int c);

/**
 * _isalpha(c) - check if the character is an alphabetic character
 * @c: character to check
 * Return 0 or 1
 */

int _isalpha(int c);

/**
 * print_sign() - prints the sign of a number
 * @n: the number that will check it sign
 *Return 0 or 1 or -1
 */

int print_sign(int n);

/**
 * _abs - 
 */

int _abs(int);

/**
 * print_last_digit -
 */

int print_last_digit(int);

/**
 *
 */

void jack_bauer(void);

/**
 *
 */

void times_table(void);

/**
 *
 */

int add(int, int);

/**
 *
 */

void print_to_98(int n);

/**
 *
 */

void print_times_table(int n);

#endif
