#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: checked character
*
* Return: 1 or 0
*/
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
