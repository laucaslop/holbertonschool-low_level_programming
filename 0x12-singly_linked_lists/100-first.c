#include <stdio.h>

/**
* hare - function that prints beore main
*/
void hare(void) __attribute__ ((constructor));

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
