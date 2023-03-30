#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Abdelkouddouss Mekkaoui
 * Desc: Header file containing prototypes and definitions for all functions
 *       and types written in the 0x12-singly_linked_lists directory.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
