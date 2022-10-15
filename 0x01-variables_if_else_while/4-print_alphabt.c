#include <stdio.h>

/**
 * main - prnts apha in lower case
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		putchar(le);
	}
	putchar('\n');

	return (0);
}
