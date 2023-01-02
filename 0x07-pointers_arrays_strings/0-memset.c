#include "main.h"

/**
 * _memset - Fills a memory with a constant byte of characters
 *  @s: a memory location to be filled
 *  @b: the character to fill the memory
 *  @n: number of bytes
 *  Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (ptr);
}

