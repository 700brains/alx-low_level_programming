#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appointed to @dest.
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}




/* another method using pointer notation
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
*/
