#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: Destination
 * @src: source
 * @n: number of bytes
 * Return: A pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptr);
}

