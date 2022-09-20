#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * password - generates a random password
 * 
 * Return: void
 */

void password(void)
{


	srand(time(NULL));
	//char list[] = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	//list[rand() % (sizeof list - 1)];
	printf("Tada! Congrats");

}

/**
 * main - writes passwords
 * @void: Empty parameter list for main.
 *
 * Description: Writes ask for length and generate a random number
 *
 * Return: 0 for success
*/
int main(void)
{

	password();
	
	return 0;
}
