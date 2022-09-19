#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * password - generates a random password
 * @password: int
 * Return: 0
 */

int password(int password) {
char list[] = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
printf("\t");
int i,j,k;
for(i = 0; i < password; i++) {
    printf("*");
}
printf("\n");
printf("\t");
srand(time(NULL));

for(j = 0; j < password; j++) {
    printf("%c", list[rand() % (sizeof list - 1)]);
}
printf("\n");
printf("\t");

for(k = 0; k < password; k++) {
    printf("*");
}
printf("\n");
}
