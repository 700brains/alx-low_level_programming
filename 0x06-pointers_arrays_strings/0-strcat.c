#include "main.h"


/**
 *_strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, j = 0;

	while (dest[a++])
		j++;
	
	for(a = 0; src[a]; a++)
		dest[j++] = src[a];
	

	return (dest);
}
