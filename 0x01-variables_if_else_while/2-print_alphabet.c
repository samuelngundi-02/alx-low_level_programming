#include <stdio.h>

/**
  * main - prints the alphabet in lowercase
  * Return: 0 if successful
  */
int main(void)
{
	char a = 'a';
	/* Using for-loop to loop alphabet */
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
