#include "main.h"


/**
 * _strcat - concatenates two strings
 * @src: second string to copy from
 * @dest: string to be overwritten
 * Description: concatenates src to end of dest
 * Return: pointer to dest
 **/

char *_strcat(char *dest, char *src)
	{
		int a = 0, j = 0;

		while (dest[a++])
			j++;
		for (a = 0; src[a]; a++)
			dest[j++] = src[a];
		return (dest);
	}
