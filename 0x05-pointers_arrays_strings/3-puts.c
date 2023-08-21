#include "main.h"
/**
 * _puts - prints string followed by new line
 * @str: print string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
