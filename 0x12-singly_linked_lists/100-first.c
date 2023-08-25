#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * 1st to do  - Prints a Sentence Before The Main
 * Function is Executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
