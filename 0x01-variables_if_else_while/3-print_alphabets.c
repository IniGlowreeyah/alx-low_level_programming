#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabets in caps and lower case
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar (Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		putchar (Upper);
		Upper++;
	}
	putchar ('\n');
	return (0);
}
