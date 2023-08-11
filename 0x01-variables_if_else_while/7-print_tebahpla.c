#include <stdio.h>
/**
 * main -print alphabets in reverse mode
 *
 * Return: (0)
 *
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
