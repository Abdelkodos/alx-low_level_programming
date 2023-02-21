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
#endif
