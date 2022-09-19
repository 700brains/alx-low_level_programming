#include "main.h"

/**
 * Swap takes two pointer to an int as parameter
 * and swaps its individual values to one another
 * @a: pointer to int a
 * @b: pointer to int b
 */


int swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
	return;


}
