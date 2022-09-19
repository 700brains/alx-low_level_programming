#include "main.h"


/** 
 * _strlen - returns the length of a string 
 * @s: string
 * Rturn: length
 */

int _strlen(char *s)
{
	int len = 0 ;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);

}

/**
 * puts_half - prints half of a string , followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int ndx;
	int len = _strlen(str);

}
