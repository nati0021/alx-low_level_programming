#include "main.h"
#include <stdio.h>
/**
 *_strchr - loctes a charachter in string
 *@s: an input string
 *@c: an input character to be locted
 *Return: pointer too c poision
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
