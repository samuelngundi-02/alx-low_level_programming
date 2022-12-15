#include <unistd.h>

/**
  * _putchar - function to write putchar
  * @c: Character to be used
  * Return: 1 if succesful -1 if failed
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
