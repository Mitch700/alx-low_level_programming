#include <stdio.h>

/**
* main - Entry point
* This program prints every hexadecimal character
* Return: 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
		putchar(a);
	for (a = 97; a <= 102; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
