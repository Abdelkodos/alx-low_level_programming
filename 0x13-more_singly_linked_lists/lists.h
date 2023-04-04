#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Abdelkouddouss Mekkaoui
 * Desc: Header file containing prototypes and definitions for all functions
 * 	and types written in the 0x13-more_singly_linked_lists directory.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
