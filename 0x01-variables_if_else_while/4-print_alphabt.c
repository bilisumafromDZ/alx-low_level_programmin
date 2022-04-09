#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	
	char l;
	char e;
	char q;
	l = 'a';

	while (l <= 'z')
	{
		if( l != q && l != e)
		{
			putchar(l);
			putchar("\n");
			l++
		}
	}
	return (0);
}
