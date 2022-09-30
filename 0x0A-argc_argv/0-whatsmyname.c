#include <stdio.h>
#include "main.h"

/**
 * main - prints program name, followed bt a new line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return 0 on sucess
 */


int main(int argc, char *argv[])
{
	if(argc > 0)
		printf("%s\n", argv[0]);
	

	return (0);

}
