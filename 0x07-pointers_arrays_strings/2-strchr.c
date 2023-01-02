#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a character to search
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s++ != '\0')
		if (c == *s)
			return (s);

	return (s);
}
