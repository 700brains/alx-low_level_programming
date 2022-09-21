#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appointed to @dest.
 */


char *_strcat(char *dest, char *src)
{
        int i = 0;
	int j = 0;
	while (*(dest + i))
	   i++;
	while (*(src + j))
	{
	   *(dest+i) = *(src+j);
	   i++;
	   j++;
	}
	*(dest+i) = '\0';
	return (dest);
}

