#include <stdio.h>
/**
 * main - print the number of base 10
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int base_ten = 0;

	while (base_ten <= 10)
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
