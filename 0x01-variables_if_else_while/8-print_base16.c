#include <stdio.h>

/**
  * main - Function to print base 16 numbers in lowercase
  *
  * Return: 0 Always(Success)
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
