#include <stdio.h>
/**
 * main - print numbers of base 16 in lowercase
 * using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
