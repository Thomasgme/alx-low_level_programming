#include <stdio.h>

/**
 * main - prnts apha in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' || lc != 'q')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
