#include <stdio.h>
/**
 * pre_main_message - a function that executes before the main
 * Return: strings
 */
void __attribute__((constructor)) pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
