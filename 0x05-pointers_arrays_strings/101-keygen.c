#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * password - generates a random password
 * @password: int
 * Return: void
 */

void password(int password) {


	int j;
	srand(time(NULL));
	for(j = 0; j < password; j++)
	{
		printf("Tada! Congrats");
	}

}

/**
 * main - writes passwords
 * @void: Empty parameter list for main.
 *
 * Description: Writes ask for length and generate a random number
 *
 * Return: 0 for success
*/
int main(void) {
int password_length;
printf("\n\t*********************************\n\n");
printf("\tWelcome to the password generator\n\n");
printf("\t*********************************\n");
printf("\n\tEnter length of the password = ");
scanf("%d", &password_length);
printf("\n");
printf("\n");
password(password_length);
return 0;
}
